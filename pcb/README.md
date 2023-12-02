# Phalanx PCB

![The Phalanx PCB, Version 0.1.0][pcb image]

## Getting Board

Check out [the Phalanx releases page][releases] for the required files to get
PCBs manufactured (`plot.zip`) and/or assembled (`bom.csv` and `cpl.csv`). For
those with soldering abilities, an interactive BOM/CPL HTML file (`ibom.html`)
is provided to aid with self-assembly.

## Build Locally

During development, it may be preferable (faster) to run rule checks and test
builds locally. There is a `run` shell script in the root of this repository
that is used by the CI/CD for building releases. This script can be run
directly (`./run build`), but it requires the `kicad-cli` nightly release to be
installed. Instead, if `podman` is available, it is recommended to use the
`build-pcb` script. This script just runs the `./run` script in the
`kicad/kicad:nightly` container. The build files and reports (ERC/DRC) are
placed in the `dist` directory.

[pcb image]: https://cdn.jsdelivr.net/gh/rasch/phalanx@assets/phalanx-fpcb.webp
[releases]: https://github.com/rasch/phalanx/releases/
