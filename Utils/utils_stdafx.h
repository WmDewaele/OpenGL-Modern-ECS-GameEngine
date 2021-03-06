// utils_stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <exception>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include <vector>
#include <chrono>


#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>

#include <Utils/Timer.h>
#include <Utils/trim.h>

#include <Debug/Assertion.h>
#include <Debug/Log.h>