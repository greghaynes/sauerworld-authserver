project(sauertools)

set(sauertools_srcs
	tools.cpp
	stream.cpp
	crypto.cpp)

add_definitions(-DSTANDALONE)

include_directories(${CMAKE_SOURCE_DIR}/src/enet/include)

add_library(sauertools STATIC ${sauertools_srcs})

