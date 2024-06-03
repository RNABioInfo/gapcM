![example branch parameter](https://github.com/jlab/gapc/actions/workflows/c-cpp.yml/badge.svg)
[![Anaconda-Server Badge](https://anaconda.org/bioconda/bellmans-gapc/badges/version.svg)](https://anaconda.org/bioconda/bellmans-gapc)
<a href="https://launchpad.net/~janssenlab/+archive/ubuntu/software" style="border: none;"><img src="http://media.launchpad.net/lp-badge-kit/launchpad-badge-w160px.png" alt="Launchpad logo" style="border: none;" height="20px;"/></a>
```
  ____       _ _                       _        _____          _____  
 |  _ \     | | |                     ( )      / ____|   /\   |  __ \ 
 | |_) | ___| | |_ __ ___   __ _ _ __ |/ ___  | |  __   /  \  | |__) |
 |  _ < / _ \ | | '_ ` _ \ / _` | '_ \  / __| | | |_ | / /\ \ |  ___/ 
 | |_) |  __/ | | | | | | | (_| | | | | \__ \ | |__| |/ ____ \| |     
 |____/ \___|_|_|_| |_| |_|\__,_|_| |_| |___/  \_____/_/    \_\_|     
```                                                                      
############# PLEASE READ ME BEFORE USING THIS REPO ###############

This repo will be used to collect changes to the original gapc that I make while trying to implement RNA 3D Motifs into RNA secondary structure prediction.
I will mostly keep all original functionalities and only add more, but I can not guarantee that my changes don't have unexpected consequences. Installation at this point is only available from source.
For the original compiler please refer to /jlab/gapc.

##############################################################

## Dependencies

Bellman's GAP was tested on the following dependencies.

compile time:
- C++ compiler (GCC g++ for example)
- C compiler (GCC for example)
- Flex >= 2.5.34
- GNU bison >= 2.4.1
- GNU make >= 3.81
- GSL (if not already installed, installation tested with GSL 2.7.1)
- Mercurial >= 0.9.5
- boost >=  1.36 (1.34 without the Accumulators Framework, installation with Boost 1.8.6 lead to issues, might need to use an older version)
  - unittest framework (libboost-test-dev)
  - pool
  - program options (libboost-program-options-dev)
  - cstdint
  - the accumulator framework (with -DSTATS)
- ksh93 - or - bash >= 2.03.0(1) (only needed for test scripts)

runtime:
- boost >=  1.36 (1.34 without the Accumulators Framework)
  - pool
  - program options
  - cstdint
  - the accumulator framework (with -DSTATS)

## SOURCES

Always get the latest sources from github:
`git clone https://github.com/RNABioInfo/gapcM.git`


## INSTALLATION

### from source

To install Bellman's GAP from source call:

1. `./configure --prefix=<install-path>`
2. `make`
3. `make install`

If `--prefix` is not set the path defaults to `/usr/local`

More options for `./configure` are:
```
CXX=<g++ path>
CC=<gcc path>
SED=<sed path>
FLEX=<flex path>
BISON=<bison path>
--with-boost=<path to booth installation>
--with-boost-program-options=<path to boost library program options> and --with-boost-unit-test-framework=<path to boost library unit test>
```
