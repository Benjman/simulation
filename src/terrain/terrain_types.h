#ifndef SIMULATION_TERRAIN_TYPES_H
#define SIMULATION_TERRAIN_TYPES_H

#define BIOME_BITS (3)
#define BIOME_SHIFT (0)
#define BIOME_MASK (0b111)

#define GROUND_BITS (2)
#define GROUND_SHIFT (BIOME_BITS)
#define GROUND_MASK (0b11000)

#define TERRAIN_BITS (3)
#define TERRAIN_SHIFT (GROUND_BITS + GROUND_SHIFT)
#define TERRAIN_MASK (0b1110000)

/// 8-bit value to determine the the cell type.
///
/// Data layout:
/// 	BITS	LOCATION	|	VALUE
///		3		0-2:		|	Biome type
/// 	2		3-4:		|	Ground type
/// 	3		5-7:		|	TerrainType type
enum TerrainType {

	// BIOME TYPES								8 max
	// ==============================================
	BIOME_ARCTIC = (0x0 << BIOME_SHIFT),
	BIOME_FOREST = (0x1 << BIOME_SHIFT),


	// GROUND TYPES								4 max
	// ==============================================
	GROUND_TYPE_ELEMENTAL = (0x0 << GROUND_SHIFT),
	GROUND_TYPE_FLOORING = (0x1 << GROUND_SHIFT),
	GROUND_TYPE_SOIL = (0x2 << GROUND_SHIFT),
	GROUND_TYPE_STONE = (0x3 << GROUND_SHIFT),


	// TERRAIN TYPES			8 max per ground type
	// ==============================================
	ELEMENTAL_FIRE = (0x0 << TERRAIN_SHIFT) & GROUND_TYPE_ELEMENTAL,
	ELEMENTAL_LAVA = (0x1 << TERRAIN_SHIFT) & GROUND_TYPE_ELEMENTAL,
	ELEMENTAL_WATER = (0x2 << TERRAIN_SHIFT) & GROUND_TYPE_ELEMENTAL,

	SOIL_GRASS = (0x0 << TERRAIN_SHIFT) & GROUND_TYPE_SOIL,
	SOIL_SAND = (0x1 << TERRAIN_SHIFT) & GROUND_TYPE_SOIL,

	STONE_GRANITE = (0x0 << TERRAIN_SHIFT) & GROUND_TYPE_STONE,

	FLOORING_CEMENT = (0x0 << TERRAIN_SHIFT) & GROUND_TYPE_FLOORING,
	FLOORING_WOOD = (0x1 << TERRAIN_SHIFT) & GROUND_TYPE_FLOORING,


};

#endif //SIMULATION_TERRAIN_TYPES_H
