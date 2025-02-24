
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(abseil-cpp-tstring-y_absl-flags)
target_compile_options(abseil-cpp-tstring-y_absl-flags PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(abseil-cpp-tstring-y_absl-flags PUBLIC
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring
)
target_link_libraries(abseil-cpp-tstring-y_absl-flags PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  abseil-cpp-tstring-y_absl-base
  abseil-cpp-tstring-y_absl-container
  abseil-cpp-tstring-y_absl-debugging
  abseil-cpp-tstring-y_absl-hash
  abseil-cpp-tstring-y_absl-memory
  abseil-cpp-tstring-y_absl-numeric
  abseil-cpp-tstring-y_absl-profiling
  abseil-cpp-tstring-y_absl-strings
  abseil-cpp-tstring-y_absl-synchronization
  abseil-cpp-tstring-y_absl-time
  abseil-cpp-tstring-y_absl-types
)
target_sources(abseil-cpp-tstring-y_absl-flags PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/commandlineflag.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/internal/commandlineflag.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/internal/flag.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/internal/private_handle_accessor.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/internal/program_name.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/internal/usage.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/marshalling.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/parse.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/reflection.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/usage.cc
  ${PROJECT_SOURCE_DIR}/contrib/restricted/abseil-cpp-tstring/y_absl/flags/usage_config.cc
)
