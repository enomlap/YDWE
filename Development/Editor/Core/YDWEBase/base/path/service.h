#pragma once

#include <base/config.h>
#include <boost/filesystem.hpp>

namespace base { namespace path {
	enum PATH_TYPE
	{
		DIR_EXE = 0,
		DIR_MODULE,
		DIR_TEMP,
		DIR_WINDOWS,
		DIR_SYSTEM,
		//DIR_PROGRAM_FILESX86,
		DIR_PROGRAM_FILES,
		DIR_IE_INTERNET_CACHE,
		DIR_COMMON_START_MENU,
		DIR_START_MENU,
		DIR_APP_DATA,
		DIR_COMMON_APP_DATA,
		DIR_PROFILE,
		//DIR_LOCAL_APP_DATA_LOW,
		DIR_LOCAL_APP_DATA,
		DIR_SOURCE_ROOT, 
		//DIR_APP_SHORTCUTS, 
		DIR_USER_DESKTOP,
		DIR_COMMON_DESKTOP,
		DIR_USER_QUICK_LAUNCH,
		DIR_DEFAULT_USER_QUICK_LAUNCH,
		DIR_TASKBAR_PINS,
	};

	_BASE_API boost::filesystem::path get(PATH_TYPE type);
}}
