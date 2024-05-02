#include "being.cpp"
#include <iostream>


int main(){
      srand ( time(NULL) );
being player("Rozcrates");
std::cout << player.getName() << std::endl ;
player.stats();
return 0;
}