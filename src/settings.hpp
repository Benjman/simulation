#ifndef SIMULATION_SETTINGS_HPP
#define SIMULATION_SETTINGS_HPP

#include <cstddef>

struct Settings {
    const size_t MapSize = 2048;
};

enum BufferLayers {
    TERRAIN,

    LAST
};

static void populateSettings(Settings &settings, int argc, char **argv) {
    // TODO read settings from res file
}

#endif //SIMULATION_SETTINGS_HPP
