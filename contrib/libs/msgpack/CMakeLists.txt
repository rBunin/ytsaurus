
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(contrib-libs-msgpack)
target_compile_options(contrib-libs-msgpack PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(contrib-libs-msgpack PUBLIC
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/include
)
target_link_libraries(contrib-libs-msgpack PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  contrib-libs-libc_compat
)
target_sources(contrib-libs-msgpack PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/src/objectc.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/src/unpack.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/src/version.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/src/vrefbuffer.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/msgpack/src/zone.c
)
