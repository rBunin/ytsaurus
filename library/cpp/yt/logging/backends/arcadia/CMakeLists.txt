
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(logging-backends-arcadia)
target_compile_options(logging-backends-arcadia PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(logging-backends-arcadia PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  cpp-yt-assert
  cpp-yt-logging
  library-cpp-logger
)
target_sources(logging-backends-arcadia PRIVATE
  ${PROJECT_SOURCE_DIR}/library/cpp/yt/logging/backends/arcadia/backend.cpp
)
