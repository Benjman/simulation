#ifndef SIMULATION_ENGINE_H
#define SIMULATION_ENGINE_H

#include "settings.hpp"
#include "game_state.hpp"
#include "renderer.h"

struct Engine {
    GameState gameState;
    Settings &settings;

    explicit Engine(Settings &settings) : settings(settings), gameState(settings) {
    }

    void run() {
        ulong count = 0;
        while (count-- > 0) { // TODO input handling escape
        	gameState.tick(0.16);
        }
    }

    void init() {
        gameState.init(settings);
    }
};

#endif //SIMULATION_ENGINE_H
