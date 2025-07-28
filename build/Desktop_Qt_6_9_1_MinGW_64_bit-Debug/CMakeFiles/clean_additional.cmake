# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\lib_books_management_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\lib_books_management_autogen.dir\\ParseCache.txt"
  "lib_books_management_autogen"
  )
endif()
