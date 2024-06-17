# Phalanx

![The Phalanx Keyboard, Version 0.1.0][image]

The [Phalanx] is a <kbd>4</kbd> <kbd>×</kbd> <kbd>3</kbd> <kbd>+</kbd> <kbd>2</kbd>,
*ortholinear*, *staggered*, *split* keyboard.

- Keyboard Maintainer: [rasch](https://github.com/rasch/phalanx)
- Hardware Supported: Phalanx 0.1.0 (stm32f072)
- Hardware Availability: [phalanx]

## Getting Board

Check out [the Phalanx releases page][releases] for the required files to get
PCBs manufactured (`plot.zip`) and/or assembled (`bom.csv` and `cpl.csv`). For
those with soldering abilities, an interactive BOM/CPL HTML file (`ibom.html`)
is provided to aid with self-assembly.

During development, it may be preferable (faster) to run rule checks and test
builds locally. There is a `run` shell script in the root of this repository
that is used by the CI/CD for building releases. This script can be run
directly (`./run pcb`), but it requires the `kicad-cli` 8.0+ release to be
installed. Instead, if `podman` is available, it is recommended to use the
`build` script. This script just runs the `./run` script in the
`kicad/kicad:8.0` container. The build files and reports (ERC/DRC) are placed in
the `dist` directory.

![The Phalanx Keyboard, Version 0.1.0][image-pcb]

In addition to the parts listed in the BOM, the following will be needed for a
complete keyboard:

- 28 x Kailh Low Profile Choc Switches (PG1350)
- 28 x 1u Choc Keycaps (such as MBK, I prefer the convex keys for the thumbs)
- USB-C cable to connect to device
- RJ45 Ethernet Cable to connect keyboard halves (the monoprice micro slimrun
  patch cable works well, I've used the 6 inch cable)
- Some rubber feet or neoprene adhesive rubber pads to prevent the board from
  sliding all over the place

## Firmware Installation

Download the firmware, `phalanx_default.bin`, from [the Phalanx releases
page][releases]. To flash the keyboard, press the reset button on the PCB to
enter bootloader mode, then run:

```sh
dfu-util -a 0 -d 0483:DF11 -s 0x8000000:leave -D phalanx_default.bin
```

For details on compiling the firmware, please see the [Github Actions
workflow][build].

## Keymap

The base alpha layer is based on the [Engram] layout.

```txt
  B  Y  O  U       L  D  W  V
  C  I  E  A       H  T  S  N
  G  X  J  K       R  M  F  P
            ␣    ⌫
```

[QMK] features such as `Mod-Tap`, `Layers`, `Combos` and `Tap Dance` are
utilized to maximize Phalanx's features with only 27% of the keys from a
standard keyboard. Please visit the [Phalanx website][phalanx] for details of
the layout.

## License

[Solderpad Hardware License v2.1](LICENSE)

[phalanx]: https://www.rasch.co/phalanx
[releases]: https://github.com/rasch/phalanx/releases/
[image]: https://i.imgur.com/y4TYriW.jpg
[image-pcb]: https://i.imgur.com/gtF0UkI.png
[build]: https://github.com/rasch/phalanx/blob/main/.github/workflows/fw.yml
[engram]: https://engram.dev/
[qmk]: https://docs.qmk.fm/#/
[//]: https://en.wikipedia.org/wiki/Phalanx_bone
