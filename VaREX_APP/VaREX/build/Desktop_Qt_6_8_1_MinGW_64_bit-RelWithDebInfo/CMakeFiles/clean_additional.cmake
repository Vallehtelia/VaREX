# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\VaREX_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VaREX_autogen.dir\\ParseCache.txt"
  "VaREX_autogen"
  )
endif()
