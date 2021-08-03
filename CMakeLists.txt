cmake_minimum_required(VERSION 3.20)
project(simulation)

set(CMAKE_CXX_STANDARD 17)

add_executable(simulation
		src/data/bit_buffer.h
        src/engine.h
		src/game_state.hpp
		src/main.cpp
        src/settings.hpp
        src/terrain/terrain.h
		src/chunk.h
		src/renderer.cpp
		src/renderer.h
		src/colors.h src/terrain/terrain_dto.h src/terrain/_terrain_utils.h src/terrain/terrain_types.h src/utils.h)

include_directories(src)

# lodepng used for debug rendering (.png generation)
set(LIBRARIES ${LIBRARIES} /usr/lib/x86_64-linux-gnu/libdart-external-lodepng.so)

target_link_libraries(simulation ${LIBRARIES})
