#pragma once

#include <yt/yt/core/logging/log.h>

#include <yt/yt/library/profiling/sensor.h>

namespace NYT::NYqlAgent {

////////////////////////////////////////////////////////////////////////////////

inline const NLogging::TLogger YqlAgentLogger("YqlAgent");
inline const NProfiling::TProfiler YqlAgentProfiler = NProfiling::TProfiler("/yql_agent").WithGlobal();

////////////////////////////////////////////////////////////////////////////////

DECLARE_REFCOUNTED_STRUCT(IYqlAgent)
DECLARE_REFCOUNTED_CLASS(TYqlAgentConfig)
DECLARE_REFCOUNTED_CLASS(TYqlAgentDynamicConfig)

DECLARE_REFCOUNTED_CLASS(TYqlAgentServerConfig)
DECLARE_REFCOUNTED_CLASS(TYqlAgentServerDynamicConfig)

DECLARE_REFCOUNTED_CLASS(TDynamicConfigManager)

DECLARE_REFCOUNTED_CLASS(TVanillaJobFile)
DECLARE_REFCOUNTED_CLASS(TDqYtBackend)
DECLARE_REFCOUNTED_CLASS(TDqYtCoordinator)
DECLARE_REFCOUNTED_CLASS(TDqManagerConfig)

////////////////////////////////////////////////////////////////////////////////

using TAgentId = TString;

using TQueryId = TGuid;

////////////////////////////////////////////////////////////////////////////////

} // namespace NYT::NYqlAgent
