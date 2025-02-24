
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_executable(unittester-core-rpc-shutdown)
target_compile_options(unittester-core-rpc-shutdown PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(unittester-core-rpc-shutdown PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  library-cpp-cpuid_check
  cpp-testing-gtest
  cpp-testing-gtest_main
  yt-yt-core
  core-rpc-grpc
  rpc-unittests-lib
  yt-core-test_framework
  cpp-testing-common
)
target_link_options(unittester-core-rpc-shutdown PRIVATE
  -ldl
  -lrt
  -Wl,--no-as-needed
  -fPIC
  -fPIC
  -lpthread
  -lrt
  -ldl
  -lutil
)
target_sources(unittester-core-rpc-shutdown PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/unittests/rpc_shutdown_ut.cpp
)
add_test(
  NAME
  unittester-core-rpc-shutdown
  COMMAND
  unittester-core-rpc-shutdown
)
set_property(
  TEST
  unittester-core-rpc-shutdown
  PROPERTY
  LABELS
  MEDIUM
)
set_property(
  TEST
  unittester-core-rpc-shutdown
  PROPERTY
  PROCESSORS
  1
)
set_property(
  TEST
  unittester-core-rpc-shutdown
  PROPERTY
  ENVIRONMENT
)
target_allocator(unittester-core-rpc-shutdown
  cpp-ytalloc-impl
)
vcs_info(unittester-core-rpc-shutdown)
