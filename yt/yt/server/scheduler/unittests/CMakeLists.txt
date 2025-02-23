
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_executable(unittester-scheduler)
target_compile_options(unittester-scheduler PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(unittester-scheduler PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  library-cpp-cpuid_check
  cpp-testing-gtest
  cpp-testing-gtest_main
  yt-server-scheduler
)
target_link_options(unittester-scheduler PRIVATE
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
target_sources(unittester-scheduler PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/fair_share_packing_ut.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/fair_share_strategy_operation_controller_ut.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/fair_share_tree_element_ut.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/fair_share_tree_job_scheduler_ut.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/job_metrics_ut.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/scheduler/unittests/scheduler_helpers_ut.cpp
)
add_test(
  NAME
  unittester-scheduler
  COMMAND
  unittester-scheduler
)
set_property(
  TEST
  unittester-scheduler
  PROPERTY
  LABELS
  MEDIUM
)
set_property(
  TEST
  unittester-scheduler
  PROPERTY
  PROCESSORS
  1
)
set_property(
  TEST
  unittester-scheduler
  PROPERTY
  ENVIRONMENT
)
target_allocator(unittester-scheduler
  cpp-malloc-tcmalloc
  libs-tcmalloc-default
)
vcs_info(unittester-scheduler)
