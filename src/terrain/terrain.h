#ifndef SIMULATION_TERRAIN_H
#define SIMULATION_TERRAIN_H

#include "terrain_types.h"
#include "terrain_dto.h"
#include "colors.h"

struct Overlay {
	static Color getBiomeOverlayColor(TerrainType terrainType) {
		switch (terrainType) {
			case BIOME_ARCTIC:
				return Colors::Blue300;
			case BIOME_FOREST:
				return Colors::Green500;
			default:
				return Colors::Red500;
		}
	}
};

#endif //SIMULATION_TERRAIN_H
