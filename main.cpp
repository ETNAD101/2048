#include <iostream>
#include "game.h"

int main() {
   Game g = Game();
   int x;
   std::cin >> x;
   g.setPoint(x, 0, 0);
   g.display();

   return 0;
}