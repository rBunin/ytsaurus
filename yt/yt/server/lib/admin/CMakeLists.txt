
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(server-lib-admin)
target_compile_options(server-lib-admin PRIVATE
  -Wdeprecated-this-capture
)
target_link_libraries(server-lib-admin PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  yutil
  yt-yt-ytlib
  yt-library-coredumper
)
target_sources(server-lib-admin PRIVATE
  ${PROJECT_SOURCE_DIR}/yt/yt/server/lib/admin/admin_service.cpp
  ${PROJECT_SOURCE_DIR}/yt/yt/server/lib/admin/restart_service.cpp
)
