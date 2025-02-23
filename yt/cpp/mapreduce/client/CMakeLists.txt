
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


get_built_tool_path(
  TOOL_enum_parser_bin
  TOOL_enum_parser_dependency
  tools/enum_parser/enum_parser
  enum_parser
)

add_library(cpp-mapreduce-client)
target_compile_options(cpp-mapreduce-client PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(cpp-mapreduce-client PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  cpp-digest-md5
  library-cpp-sighandler
  cpp-threading-blocking_queue
  cpp-threading-future
  library-cpp-type_info
  library-cpp-yson
  cpp-mapreduce-common
  cpp-mapreduce-http
  cpp-mapreduce-interface
  cpp-mapreduce-io
  mapreduce-library-table_schema
  cpp-mapreduce-raw_client
  yt-yt-core
  yt-core-http
  tools-enum_parser-enum_serialization_runtime
)
target_sources(cpp-mapreduce-client PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/abortable_registry.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/batch_request_impl.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/client_reader.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/client_writer.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/client.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/file_reader.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/file_writer.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/format_hints.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/init.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/lock.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/operation_helpers.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/operation_preparer.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/operation_tracker.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/operation.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/prepare_operation.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/py_helpers.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/retry_heavy_write_request.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/retry_transaction.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/retryful_writer.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/retryful_writer_v2.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/retryless_writer.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/skiff.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/structured_table_formats.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/transaction.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/transaction_pinger.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/yt_poller.cpp
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/dummy_job_profiler.cpp
)
generate_enum_serilization(cpp-mapreduce-client
  ${PROJECT_SOURCE_DIR}/yt/cpp/mapreduce/client/structured_table_formats.h
  INCLUDE_HEADERS
  yt/cpp/mapreduce/client/structured_table_formats.h
)
