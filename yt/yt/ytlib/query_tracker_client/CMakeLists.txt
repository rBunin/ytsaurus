
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


find_package(Python3 REQUIRED)

add_library(yt-ytlib-query_tracker_client)
target_compile_options(yt-ytlib-query_tracker_client PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(yt-ytlib-query_tracker_client PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  yt-yt-client
)
target_sources(yt-ytlib-query_tracker_client PRIVATE
  ${PROJECT_BINARY_DIR}/yt/yt/ytlib/query_tracker_client/records/query.record.h
  ${PROJECT_SOURCE_DIR}/yt/yt/ytlib/query_tracker_client/config.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/ytlib/query_tracker_client/helpers.cpp
  ${PROJECT_BINARY_DIR}/yt/yt/ytlib/query_tracker_client/records/query.record.cpp
)
add_custom_command(
  OUTPUT
  ${PROJECT_BINARY_DIR}/yt/yt/ytlib/query_tracker_client/records/query.record.cpp
  ${PROJECT_BINARY_DIR}/yt/yt/ytlib/query_tracker_client/records/query.record.h
  DEPENDS
  ${PROJECT_SOURCE_DIR}/yt/yt/ytlib/query_tracker_client/records/query.yaml
  ${PROJECT_SOURCE_DIR}/yt/yt/tools/record_codegen/__main__.py
  ${PROJECT_SOURCE_DIR}/yt/python/yt/record_codegen_helpers/__init__.py
  COMMAND
  ${CMAKE_COMMAND}
  -E
  env
  PYTHONPATH=$ENV{PYTHONPATH}:${PROJECT_SOURCE_DIR}/yt/python/yt
  ${Python3_EXECUTABLE}
  ${PROJECT_SOURCE_DIR}/yt/yt/tools/record_codegen/__main__.py
  --input
  ${PROJECT_SOURCE_DIR}/yt/yt/ytlib/query_tracker_client/records/query.yaml
  --output-root
  ${PROJECT_BINARY_DIR}
  --output-cpp
  ${PROJECT_BINARY_DIR}/yt/yt/ytlib/query_tracker_client/records/query.record.cpp
  --output-include
  yt/yt/ytlib/query_tracker_client/public.h
  --output-include
  yt/yt/client/table_client/record_codegen_deps.h
  --output-include
  yt/yt/core/yson/string.h
  --output-include
  yt/yt/core/misc/error.h
)
