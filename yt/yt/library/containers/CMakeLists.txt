
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


add_subdirectory(cri)
add_subdirectory(disk_manager)
add_subdirectory(unittests)

add_library(yt-library-containers)
target_compile_options(yt-library-containers PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(yt-library-containers PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  cpp-porto-proto
  yt-library-process
  yt-yt-core
  library-cpp-porto
)
target_sources(yt-library-containers PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/cgroup.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/cgroups_new.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/config.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/helpers.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/instance.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/instance_limits_tracker.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/process.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/porto_executor.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/porto_resource_tracker.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/containers/porto_health_checker.cpp
)
