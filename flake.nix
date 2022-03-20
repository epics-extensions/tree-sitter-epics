{
  description = "A very basic flake";

  inputs.nixpkgs.url = "nixpkgs-unstable";

  outputs = { self, nixpkgs }: {

    devShells.x86_64-linux.default =
      let pkgs = nixpkgs.legacyPackages.x86_64-linux;
      in
      pkgs.mkShell {
        nativeBuildInputs = with pkgs; [ tree-sitter nodejs emscripten nodePackages.prettier ];
      };

    devShell.x86_64-linux = self.devShells.x86_64-linux.default;

  };
}
