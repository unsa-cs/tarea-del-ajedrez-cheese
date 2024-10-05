#include "chess.h"
#include "figures.h"


void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = repeatH(join(wSquare, bSquare),4);
  char** vSquare = repeatV(jSquare,4);
  interpreter(vSquare);
}

