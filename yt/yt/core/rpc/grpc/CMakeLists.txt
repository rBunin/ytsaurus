
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


get_built_tool_path(
  TOOL_protoc_bin
  TOOL_protoc_dependency
  contrib/tools/protoc/bin
  protoc
)
get_built_tool_path(
  TOOL_cpp_styleguide_bin
  TOOL_cpp_styleguide_dependency
  contrib/tools/protoc/plugins/cpp_styleguide
  cpp_styleguide
)

add_library(core-rpc-grpc)
target_compile_options(core-rpc-grpc PRIVATE
  -Wdeprecated-this-capture
)
target_include_directories(core-rpc-grpc PUBLIC
  ${PROJECT_BINARY_DIR}/yt
)
target_include_directories(core-rpc-grpc PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/grpc
)
target_link_libraries(core-rpc-grpc PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  yt-yt-core
  contrib-libs-grpc
  cpp-string_utils-quote
  contrib-libs-protobuf
)
target_proto_messages(core-rpc-grpc PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/proto/grpc.proto
)
target_sources(core-rpc-grpc PRIVATE
  ${PROJECT_BINARY_DIR}/yt/yt/core/rpc/grpc/proto/grpc.pb.h
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/config.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/public.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/dispatcher.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/server.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/helpers.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/core/rpc/grpc/channel.cpp
)
target_proto_addincls(core-rpc-grpc
  ./yt
  ${PROJECT_SOURCE_DIR}/yt
  ${PROJECT_BINARY_DIR}
  ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/yt
  ${PROJECT_SOURCE_DIR}/yt
  ${PROJECT_SOURCE_DIR}/contrib/libs/protobuf/src
  ${PROJECT_BINARY_DIR}
  ${PROJECT_SOURCE_DIR}/contrib/libs/protobuf/src
)
target_proto_outs(core-rpc-grpc
  --cpp_out=${PROJECT_BINARY_DIR}/yt
  --cpp_styleguide_out=${PROJECT_BINARY_DIR}/yt
)
