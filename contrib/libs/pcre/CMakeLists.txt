
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


add_subdirectory(pcre16)
add_subdirectory(pcre32)

add_library(contrib-libs-pcre)
target_compile_options(contrib-libs-pcre PUBLIC
  -DPCRE_STATIC
)
target_compile_options(contrib-libs-pcre PRIVATE
  -DHAVE_CONFIG_H
  -DARCADIA_PCRE_ENABLE_JIT
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(contrib-libs-pcre PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre
)
target_link_libraries(contrib-libs-pcre PUBLIC
  contrib-libs-linux-headers
)
target_sources(contrib-libs-pcre PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_byte_order.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_chartables.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_compile.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_config.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_dfa_exec.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_exec.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_fullinfo.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_get.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_globals.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_jit_compile.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_maketables.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_newline.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_ord2utf8.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_refcount.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_string_utils.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_study.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_tables.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_ucd.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_valid_utf8.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_version.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcre_xclass.c
  ${PROJECT_SOURCE_DIR}/contrib/libs/pcre/pcreposix.c
)
