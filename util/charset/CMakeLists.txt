
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(util-charset)
target_link_libraries(util-charset PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
)
target_joined_source(util-charset
  all_charset.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/generated/unidata.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/recode_result.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/unicode_table.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/unidata.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/utf8.cpp
  ${PROJECT_SOURCE_DIR}/util/charset/wide.cpp
)
target_sources_custom(util-charset
  .sse41
  SRCS
  ${PROJECT_SOURCE_DIR}/util/charset/wide_sse41.cpp
  CUSTOM_FLAGS
  -msse4.1
)
