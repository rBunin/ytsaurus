
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(abseil-cpp-tstring-y_absl-numeric)
target_compile_options(abseil-cpp-tstring-y_absl-numeric PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(abseil-cpp-tstring-y_absl-numeric PUBLIC
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring
)
target_link_libraries(abseil-cpp-tstring-y_absl-numeric PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
)
target_sources(abseil-cpp-tstring-y_absl-numeric PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/numeric/int128.cc
)
