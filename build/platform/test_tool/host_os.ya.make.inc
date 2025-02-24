IF (HOST_OS_DARWIN AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5955149519)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5955149519)
ELSEIF (HOST_OS_DARWIN AND HOST_ARCH_ARM64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5955148273)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5955148273)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5955152376)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5955152376)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_AARCH64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5955147189)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5955147189)
ELSEIF (HOST_OS_WINDOWS AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5955150957)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5955150957)

ENDIF()
