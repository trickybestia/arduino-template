# Arduino project template

For development using VS Code, PlatformIO, clangd and gdb.

## Creating project from template

Clone this repository and rename it as you want. Feel free to delete README and LICENSE and initialize a new git repository.

Also check out `platformio.ini` and select your board (e.g. `board = nanoatmega328` for Arduino Nano, or `board = uno` for Arduino Uno, other boards can be found in [PlatformIO Docs](https://docs.platformio.org/en/latest/boards/index.html)).

## Building and flashing

Run `pio run -t upload`.

## Development

Run `pio run -t compiledb` to generate `compile_commands.json` for clangd (you may need to restart clangd language server).

There are also VS Code tasks: "Upload" (default build task), and "Regenerate compile_commands.json".

### Recommended extensions

Open command palette and choose "Extensions: Show Recommended Extensions".

### Debugging

Uncomment `build_type = debug` line in `platformio.ini`.

Change path to serial port in `.vscode/launch.json` from `/dev/ttyUSB0` to your value (it still can be the same on many systems). Now you can debug in VS Code.

## License

Licensed under [Unlicense](LICENSE).
