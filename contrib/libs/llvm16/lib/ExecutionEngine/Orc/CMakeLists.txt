
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


add_subdirectory(Shared)
add_subdirectory(TargetProcess)

add_library(lib-ExecutionEngine-Orc)
target_compile_options(lib-ExecutionEngine-Orc PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(lib-ExecutionEngine-Orc PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc
)
target_link_libraries(lib-ExecutionEngine-Orc PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  contrib-libs-llvm16
  libs-llvm16-include
  llvm16-lib-Analysis
  lib-Bitcode-Reader
  lib-Bitcode-Writer
  llvm16-lib-ExecutionEngine
  lib-ExecutionEngine-JITLink
  ExecutionEngine-Orc-Shared
  ExecutionEngine-Orc-TargetProcess
  lib-ExecutionEngine-RuntimeDyld
  llvm16-lib-IR
  llvm16-lib-MC
  lib-MC-MCDisassembler
  llvm16-lib-Object
  llvm16-lib-Passes
  llvm16-lib-Support
  llvm16-lib-Target
  llvm16-lib-TargetParser
  lib-Transforms-Utils
  llvm16-lib-WindowsDriver
)
target_sources(lib-ExecutionEngine-Orc PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/COFFPlatform.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/COFFVCRuntimeSupport.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/CompileOnDemandLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/CompileUtils.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/Core.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/DebugObjectManagerPlugin.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/DebugUtils.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/DebuggerSupportPlugin.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ELFNixPlatform.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCDebugObjectRegistrar.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCDynamicLibrarySearchGenerator.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCEHFrameRegistrar.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCGenericDylibManager.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCGenericJITLinkMemoryManager.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCGenericRTDyldMemoryManager.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/EPCIndirectionUtils.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ExecutionUtils.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ExecutorProcessControl.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/IRCompileLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/IRTransformLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/IndirectionUtils.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/JITTargetMachineBuilder.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/LLJIT.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/Layer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/LazyReexports.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/LookupAndRecordAddrs.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/MachOPlatform.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/Mangling.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/MapperJITLinkMemoryManager.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/MemoryMapper.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ObjectFileInterface.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ObjectLinkingLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ObjectTransformLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/OrcABISupport.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/OrcV2CBindings.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/RTDyldObjectLinkingLayer.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/SimpleRemoteEPC.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/SpeculateAnalyses.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/Speculation.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/TaskDispatch.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/ExecutionEngine/Orc/ThreadSafeModule.cpp
)
