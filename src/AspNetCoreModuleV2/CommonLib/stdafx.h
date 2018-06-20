// Copyright (c) .NET Foundation. All rights reserved.
// Licensed under the MIT License. See License.txt in the project root for license information.

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include <Windows.h>
#include <httpserv.h>
#include <wchar.h>
#include <vector>
#include <shellapi.h>
#include <sstream>
#include <memory>
#include <experimental/filesystem>

#include "Shlwapi.h"
#include <io.h>
#include "hashtable.h"
#include "stringu.h"
#include "stringa.h"
#include "multisz.h"
#include "dbgutil.h"
#include "ahutil.h"
#include "hashfn.h"
#include "sttimer.h"
#include "irequesthandler.h"
#include "sttimer.h"
#include "requesthandler.h"
#include "iapplication.h"
#include "application.h"
#include "SRWExclusiveLock.h"
#include "fx_ver.h"
#include "utility.h"
#include "GlobalVersionUtility.h"
#include "resources.h"
#include "aspnetcore_msg.h"
#include "hostfxr_utility.h"
#include "EventLog.h"
#include "hostfxroptions.h"
#include "exceptions.h"
