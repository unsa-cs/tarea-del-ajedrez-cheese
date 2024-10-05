#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** horizontalSquare = repeatH(join(bSquare, wSquare),4);
  char** ficha = superImpose(bishop,horizontalSquare);
  interpreter(ficha);
}
