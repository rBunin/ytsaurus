
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


get_built_tool_path(
  TOOL_rescompiler_bin
  TOOL_rescompiler_dependency
  tools/rescompiler/bin
  rescompiler
)

add_executable(library-cpp-type_info-ut)
target_link_libraries(library-cpp-type_info-ut PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  library-cpp-cpuid_check
  cpp-testing-unittest_main
  library-cpp-type_info
  library-cpp-yson
  cpp-yson-node
  library-cpp-resource
)
target_link_options(library-cpp-type_info-ut PRIVATE
  -ldl
  -lrt
  -Wl,--no-as-needed
  -fPIC
  -fPIC
  -lpthread
  -lrt
  -ldl
)
target_sources(library-cpp-type_info-ut PRIVATE
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/builder.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_basics.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_complexity_ut.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_constraints.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_deserialize.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_equivalence.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_factory.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_factory_raw.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_io.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_list.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_serialize.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_show.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/type_strip_tags.cpp
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/test_data.cpp
  ${PROJECT_BINARY_DIR}/library/cpp/type_info/ut/5e5361e0329be49ce689f46dafdeeab6.cpp
)
set_property(
  TARGET
  library-cpp-type_info-ut
  PROPERTY
  SPLIT_FACTOR
  1
)
add_yunittest(
  NAME
  library-cpp-type_info-ut
  TEST_TARGET
  library-cpp-type_info-ut
  TEST_ARG
  --print-before-suite
  --print-before-test
  --fork-tests
  --print-times
  --show-fails
)
set_yunittest_property(
  TEST
  library-cpp-type_info-ut
  PROPERTY
  LABELS
  SMALL
)
set_yunittest_property(
  TEST
  library-cpp-type_info-ut
  PROPERTY
  PROCESSORS
  1
)
set_yunittest_property(
  TEST
  library-cpp-type_info-ut
  PROPERTY
  ENVIRONMENT
)
resources(library-cpp-type_info-ut
  ${PROJECT_BINARY_DIR}/library/cpp/type_info/ut/5e5361e0329be49ce689f46dafdeeab6.cpp
  INPUTS
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/test-data/good-types.txt
  ${PROJECT_SOURCE_DIR}/library/cpp/type_info/ut/test-data/bad-types.txt
  KEYS
  /good
  /bad
)
target_allocator(library-cpp-type_info-ut
  cpp-malloc-tcmalloc
  libs-tcmalloc-no_percpu_cache
)
vcs_info(library-cpp-type_info-ut)
