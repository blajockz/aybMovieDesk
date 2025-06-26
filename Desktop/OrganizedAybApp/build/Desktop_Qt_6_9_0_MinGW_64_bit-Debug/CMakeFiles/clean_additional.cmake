# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\cinema_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cinema_autogen.dir\\ParseCache.txt"
  "cinema_autogen"
  )
endif()
