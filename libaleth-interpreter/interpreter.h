// Aleth: Ethereum C++ client, tools and libraries.
// Copyright 2018-2019 Aleth Authors.
// Licensed under the GNU General Public License, Version 3.
#pragma once

#include <evmc/evmc.h>
#include <evmc/utils.h>

#if __cplusplus
extern "C" {
#endif

EVMC_EXPORT struct evmc_instance* evmc_create_interpreter() EVMC_NOEXCEPT;

#if __cplusplus
}
#endif
