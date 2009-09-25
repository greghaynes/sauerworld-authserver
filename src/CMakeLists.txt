subdirs(enet tools)

find_package(ZLIB REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/src/tools
	${CMAKE_SOURCE_DIR}/src/enet/include
	${ZLIB_INCLUDE_PATH})

add_executable(server master.cpp command.cpp)
add_definitions(-DSTANDALONE)
target_link_libraries(server enet sauertools ${ZLIB_LIBRARIES})

add_executable(keygen keygen.cpp)
target_link_libraries(keygen enet sauertools ${ZLIB_LIBRARIES})

