
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


add_subdirectory(event_core)
add_subdirectory(event_extra)
add_subdirectory(event_openssl)
add_subdirectory(event_thread)

add_library(contrib-libs-libevent INTERFACE)
target_include_directories(contrib-libs-libevent INTERFACE
  ${PROJECT_SOURCE_DIR}/contrib/libs/libevent/include
)
target_link_libraries(contrib-libs-libevent INTERFACE
  contrib-libs-linux-headers
  libs-libevent-event_core
  libs-libevent-event_extra
  libs-libevent-event_openssl
  libs-libevent-event_thread
)
