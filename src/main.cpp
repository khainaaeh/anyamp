#include <iostream>
#include "player.h"

int main() {
    std::cout << "Добро пожаловать в anyAMP!\n";

    Player player;
    if (!player.init()) {
        return 1;
    }

    player.playNoise();

    std::cout << "Нажмите ENTER для выхода." << std::endl;
    std::cin.get();

    player.cleanup();
    return 0;
}