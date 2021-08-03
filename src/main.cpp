#include "settings.hpp"
#include "engine.h"

/// HOW IT WORKS as of 2021/08/02: A simple engine that generates an "out.png" image to the build folder.
int main(int argc, char *argv[]) {
	Settings settings;
	populateSettings(settings, argc, argv);

	Engine engine(settings);
	engine.init();
	engine.run();

	return 0;
}
