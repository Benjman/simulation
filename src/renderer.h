#ifndef SIMULATION_RENDERER_H
#define SIMULATION_RENDERER_H

class Chunk;

void renderTerrainToImage(struct Chunk *chunk, size_t width, size_t height);

#endif //SIMULATION_RENDERER_H
