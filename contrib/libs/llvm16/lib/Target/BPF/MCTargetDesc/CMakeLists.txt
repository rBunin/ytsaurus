
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.



add_library(Target-BPF-MCTargetDesc)
target_compile_options(Target-BPF-MCTargetDesc PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(Target-BPF-MCTargetDesc PRIVATE
  ${PROJECT_BINARY_DIR}/contrib/libs/llvm16/lib/Target/BPF
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc
)
target_link_libraries(Target-BPF-MCTargetDesc PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  contrib-libs-llvm16
  libs-llvm16-include
  llvm16-lib-MC
  llvm16-lib-Support
  Target-BPF-TargetInfo
  llvm16-lib-TargetParser
)
target_sources(Target-BPF-MCTargetDesc PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc/BPFAsmBackend.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc/BPFELFObjectWriter.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc/BPFInstPrinter.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc/BPFMCCodeEmitter.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/BPF/MCTargetDesc/BPFMCTargetDesc.cpp
)
