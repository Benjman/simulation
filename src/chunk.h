#ifndef SIMULATION_CHUNK_H
#define SIMULATION_CHUNK_H

#include "terrain/terrain.h"
#include "renderer.h"

struct Chunk {
	const size_t size;
	const TerrainType biome;
	const TerrainType ground;
	const TerrainType terrain;

	Chunk(size_t size, TerrainDto dto, uint32_t *buffer) : size(size), biome(dto.biome), ground(dto.ground),
														   terrain(dto.terrain), buffer(buffer) {
	}

	void init(uint32_t *ptr) {
		this->buffer = ptr;
		DEBUG();
		renderTerrainToImage(this, size, size);
	}

	TerrainType getBiome(size_t x, size_t y) {
		return (TerrainType) ((buffer[x + y * size] & BIOME_MASK) >> BIOME_SHIFT);
	}

	TerrainType getGroundType(size_t x, size_t y) {
		return (TerrainType) ((buffer[x + y * size] & GROUND_MASK) >> GROUND_SHIFT);
	}

	TerrainType getTerrainType(size_t x, size_t y) {
		return (TerrainType) ((buffer[x + y * size] & TERRAIN_MASK) >> TERRAIN_SHIFT);
	}


private:
	uint32_t *buffer; // TODO shared pointer for concurrency

	void DEBUG() const {
		for (size_t y = 0; y < size; y++) {
			for (size_t x = 0; x < size; x++) {
				buffer[x + y * size] |= biome << BIOME_SHIFT;
				buffer[x + y * size] |= ground << GROUND_SHIFT;
				buffer[x + y * size] |= terrain << TERRAIN_SHIFT;
			}
		}
	}

};

#endif //SIMULATION_CHUNK_H
