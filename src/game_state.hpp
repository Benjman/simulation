#ifndef SIMULATION_GAME_STATE_HPP
#define SIMULATION_GAME_STATE_HPP

#include <valarray>
#include "chunk.h"
#include "renderer.h"

class GameState {
	friend class Engine;

	uint32_t *worldBuffer;
	Chunk chunk;

	explicit GameState(Settings &settings) : worldBuffer(new uint32_t[settings.MapSize * settings.MapSize * BufferLayers::LAST]{0}),
											chunk(settings.MapSize, TerrainDto(BIOME_FOREST, GROUND_TYPE_SOIL, SOIL_SAND), worldBuffer) {
	}

	~GameState() {

	}

	void init(Settings &settings) {
		chunk.init(worldBuffer);
	}

	void tick(double deltaTime) {
	}

};

#endif //SIMULATION_GAME_STATE_HPP
