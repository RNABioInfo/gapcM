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
## Usage

Modified Bellman's GAP compiler for incorporation of RNA 3D Motifs into RNA secondary structure prediction.
The compiler retains full functionality but output is formatted to comma separated format.

## Dependencies

Bellman's GAP was tested on the following dependencies.

compile time:
- C++ compiler (GCC g++ for example, tested on g++ 13.2.0) 
- C compiler (GCC for example, tested on gcc 13.2.0)
- Flex >= 2.5.34 (tested on flex 2.6.4)
- GNU bison >= 2.4.1 (tested on 3.8.2)
- GNU make >= 3.81 (tested on 4.3)
- GSL (tested on 2.7.1)
- Mercurial >= 0.9.5
- boost >=  1.36 (1.34 without the Accumulators Framework, installation with Boost 1.83 works)
  - unittest framework (libboost-test-dev)
  - pool
  - program options (libboost-program-options-dev)
  - cstdint
  - the accumulator framework (with -DSTATS)
- ksh93 - or - bash >= 2.03.0(1) (only needed for test scripts)

runtime:
- boost >=  1.36 (1.34 without the Accumulators Framework, works with Boost 1.83)
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
