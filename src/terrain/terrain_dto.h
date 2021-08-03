#ifndef SIMULATION_TERRAIN_DTO_H
#define SIMULATION_TERRAIN_DTO_H

#include "terrain_types.h"

struct TerrainDto {
	const TerrainType biome;
	const TerrainType ground;
	const TerrainType terrain;

	TerrainDto(const TerrainType biome, const TerrainType ground, const TerrainType terrain)
			: biome(biome), ground(ground), terrain(terrain) {
	}
};

#endif //SIMULATION_TERRAIN_DTO_H
