#include "being.cpp"
#include <iostream>
#include <stdio.h>
#define SDL_MAIN_HANDLED

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[] ){

      srand ( time(NULL) );
being player((char*)("Rozcrates"));
std::cout << player.getName() << std::endl ;
player.stats();

return 0;
}