#!/bin/bash

set -e # stop on error
set -u # undefined/not initialised variables are errors
set -o pipefail # stop on error in cmd in pipe
# set -x # print every commands

# color in echo: https://stackoverflow.com/questions/5947742/how-to-change-the-output-color-of-echo-in-linux
# Black        0;30     Dark Gray     1;30
# Red          0;31     Light Red     1;31
# Green        0;32     Light Green   1;32
# Brown/Orange 0;33     Yellow        1;33
# Blue         0;34     Light Blue    1;34
# Purple       0;35     Light Purple  1;35
# Cyan         0;36     Light Cyan    1;36
# Light Gray   0;37     White         1;37
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
CYAN='\033[0;36m'
NC='\033[0m'        # No Color
# printf "I ${RED}love${NC} Stack Overflow\n"
# echo -e "I ${RED}love${NC} Stack Overflow"
echo -e "color code:"
echo -e " - ${RED}error${NC}"
echo -e " - ${YELLOW}warning${NC}"
echo -e " - ${CYAN}information${NC}"
echo -e " - ${GREEN}script command${NC}"
echo -e " - ${BLUE}user input${NC}"

IFS=$'\n\t'
params="$(
    getopt \
        --options "hf:" \
        --longoptions help,files: \
        --name "$0" \
        -- "$@"
)"
eval set -- "$params"

printHelp=0
files=""
while true; do
    case "$1" in
    -h | --help)
        printHelp=1
        shift
        ;;
    -f | --files)
        files="$2"
        shift 2 # shift 2 times: for the option name and option value
        ;;
    *)
        echo -e "${CYAN}[INFO]${NC} rest of the args: $1"
        break
        # exit 1
        ;;
    esac
done

if [[ "$printHelp" == 1 ]]; then
    echo -e "${CYAN}[INFO]${NC} goal of the script: display errors of a specific type of EPICS files in a user-friendly format."
    echo -e "${CYAN}[INFO]${NC} usage: $0 [-h|--help] [-f|--files \""'$(find <directory> -not -path <exclude> -type f -name <pattern>)'"\" : files to parse] [args...]"
    echo -e "${CYAN}[INFO]${NC} <directory> : where to find the files, eg: ${HOME}/tops/ "
    echo -e "${CYAN}[INFO]${NC} <exclude> : to exclude directory from find(), eg: \"./builds/\" "
    echo -e "${CYAN}[INFO]${NC} <pattern> : find files with this pattern, eg for EPICS files: "*.cmd" or "*.template" or "*.db" or "*.sub*" or "*.st" or "*.proto" "
    exit
fi

args_provided=$@
echo -e "${CYAN}[INFO]${NC} arguments parsed:"
echo -e "${CYAN}[INFO]${NC}   - printHelp: ${printHelp}"
echo -e "${CYAN}[INFO]${NC}   - files: ${files}"
echo -e "${CYAN}[INFO]${NC}   - other args are:" "$args_provided"

# global var
execute_command_return=0

function execute_command(){
    # $1: command description
    # $2: command to execute
    echo -e "${GREEN}$1${NC}: $ $2"
    eval "$2"
    execute_command_return=$?
    echo -e "${GREEN}.. done${NC}"
}

execute_command "[CMD] get tree-sitter version" "tree-sitter --version"

# for each file found, do:
for file in $files; do
    # echo -e "${CYAN}[INFO]${NC} file: $file"

    # tree-sitter
    output=$(tree-sitter parse --stat "$file" || true)
    # echo -e "${CYAN}[INFO]${NC} output: $output"

    # look for ERROR or MISSING in tree-sitter output
    error_lines=$(echo "$output" | grep -E "ERROR|MISSING" || true)

    # if at least one element then
    if [[ -n $error_lines ]]; then
        echo -e "${CYAN}[INFO]${NC} file: $file"
        # echo -e "${CYAN}[INFO]${NC} error_lines: $error_lines"

        # extract the unique line numbers
        line_numbers=$(echo "$error_lines" | grep -oE "\[[0-9]+," | grep -oE "[0-9]+" | sort -u)

        # loop through each unique line number
        while IFS= read -r line_number; do
            # if the line number is not 1, print the previous line as well
            # print lines before because sometimes the issue is with the previous line, eg: forgot to close a ")"
            if [[ $line_number -gt 1 ]]; then
                echo "Line $((line_number - 0)) (line before error): $(sed -n "$((line_number - 0)){p;q;}" "$file")"
            fi

            # print the line number and the line
            echo "Line $((line_number + 1))                    : $(sed -n "$((line_number + 1)){p;q;}" "$file")"
        done <<< "$line_numbers"

        # done
        echo -e "${CYAN}[INFO]${NC} --"
    fi
done

# summarize
echo -e "${CYAN}[INFO]${NC} summarize:"
tree-sitter parse --stat --quiet $files
