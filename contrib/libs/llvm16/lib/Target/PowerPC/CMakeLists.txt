
# This file was generated by the build system used internally in the Yandex monorepo.
# Only simple modifications are allowed (adding source-files to targets, adding simple properties
# like target_include_directories). These modifications will be ported to original
# ya.make files by maintainers. Any complex modifications which can't be ported back to the
# original buildsystem will not be accepted.


add_subdirectory(AsmParser)
add_subdirectory(Disassembler)
add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)

add_library(lib-Target-PowerPC)
target_compile_options(lib-Target-PowerPC PRIVATE
  $<IF:$<CXX_COMPILER_ID:MSVC>,,-Wno-everything>
)
target_include_directories(lib-Target-PowerPC PRIVATE
  ${PROJECT_BINARY_DIR}/contrib/libs/llvm16/lib/Target/PowerPC
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC
)
target_link_libraries(lib-Target-PowerPC PUBLIC
  contrib-libs-linux-headers
  contrib-libs-cxxsupp
  contrib-libs-llvm16
  libs-llvm16-include
  llvm16-lib-Analysis
  llvm16-lib-BinaryFormat
  llvm16-lib-CodeGen
  lib-CodeGen-AsmPrinter
  lib-CodeGen-GlobalISel
  lib-CodeGen-SelectionDAG
  llvm16-lib-IR
  llvm16-lib-MC
  llvm16-lib-Support
  llvm16-lib-Target
  Target-PowerPC-MCTargetDesc
  Target-PowerPC-TargetInfo
  llvm16-lib-TargetParser
  lib-Transforms-Scalar
  lib-Transforms-Utils
)
target_sources(lib-Target-PowerPC PRIVATE
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/GISel/PPCCallLowering.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/GISel/PPCInstructionSelector.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/GISel/PPCLegalizerInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/GISel/PPCRegisterBankInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCAsmPrinter.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCBoolRetToInt.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCBranchCoalescing.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCBranchSelector.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCCCState.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCCTRLoops.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCCTRLoopsVerify.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCCallingConv.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCEarlyReturn.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCExpandAtomicPseudoInsts.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCExpandISEL.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCFastISel.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCFrameLowering.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCGenScalarMASSEntries.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCHazardRecognizers.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCISelDAGToDAG.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCISelLowering.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCInstrInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCLoopInstrFormPrep.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCLowerMASSVEntries.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCMCInstLower.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCMIPeephole.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCMachineFunctionInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCMachineScheduler.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCMacroFusion.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCPreEmitPeephole.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCReduceCRLogicals.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCRegisterInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCSubtarget.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCTLSDynamicCall.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCTOCRegDeps.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCTargetMachine.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCTargetObjectFile.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCTargetTransformInfo.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCVSXCopy.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCVSXFMAMutate.cpp
  ${PROJECT_SOURCE_DIR}/contrib/libs/llvm16/lib/Target/PowerPC/PPCVSXSwapRemoval.cpp
)
