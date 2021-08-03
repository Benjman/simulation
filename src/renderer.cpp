#include <dart/external/lodepng/lodepng.h>
#include <iostream>
#include <ctime>

#include "chunk.h"
#include "renderer.h"
#include "utils.h"

void renderTerrainToImage(struct Chunk *chunk, size_t width, size_t height) {
	auto *buffer = new uint8_t[width * height * 4];
	for (size_t y = 0; y < height; y++) {
		for (size_t x = 0; x < height; x++) {
			Color color = Overlay::getBiomeOverlayColor(chunk->getBiome(x, y));
			uint8_t r = 255 * color.r,
					g = 255 * color.g,
					b = 255 * color.b;
			buffer[4 * width * y + 4 * x + 0] = r;
			buffer[4 * width * y + 4 * x + 1] = g;
			buffer[4 * width * y + 4 * x + 2] = b;
			buffer[4 * width * y + 4 * x + 3] = 255;
		}
	}

	//Encode the buffer
	std::string filename = "sample_" + utils::getCurrentTimestamp("%Y%m%d_%H%M%S") + ".png";
	unsigned error = lodepng::encode(filename, buffer, width, height);

	//if there's an error, display it
	if (error) std::cout << "encoder error " << error << ": " << lodepng_error_text(error) << std::endl;

	error = lodepng::encode("out.png", buffer, width, height);

	//if there's an error, display it
	if (error) std::cout << "encoder error " << error << ": " << lodepng_error_text(error) << std::endl;
}
