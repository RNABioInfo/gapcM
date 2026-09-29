include(ExternalProject)

set (BISON_PREFIX ${CMAKE_BINARY_DIR}/BISON-prefix)
set (BISON_EXTERNAL True)

ExternalProject_Add(
    BISON
    PREFIX ${BISON_PREFIX}
    BUILD_IN_SOURCE 1
    DOWNLOAD_EXTRACT_TIMESTAMP true
    URL "https://ftp.gnu.org/gnu/bison/bison-3.8.tar.gz"
    CONFIGURE_COMMAND ./configure --prefix=${BISON_PREFIX}
    BUILD_COMMAND ${CMAKE_MAKE_PROGRAM}
    INSTALL_COMMAND ${CMAKE_MAKE_PROGRAM} install
)

