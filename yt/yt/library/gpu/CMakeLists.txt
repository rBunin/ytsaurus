
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(yt-library-gpu)
target_compile_options(yt-library-gpu PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(yt-library-gpu PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  yt-library-process
  yt-yt-core
  core-rpc-grpc
  cpp-protobuf-interop
)
target_sources(yt-library-gpu PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/library/gpu/config.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/gpu/gpu_info_provider.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/gpu/helpers.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/gpu/nv_manager_gpu_info_provider.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/library/gpu/nvidia_smi_gpu_info_provider.cpp
)
