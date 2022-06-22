#include <iostream>
#include "game.h"

int main() {
   Game g = Game();
   g.place();
   g.display();
   g.clear();
   g.display();
   return 0;
}