#include <iostream>
#include "game.h"

int main() {
   Game g = Game();
   int in;
   for(int i = 0; i < 10; i++) {
      g.place();
      g.display();
   }
   return 0;
}