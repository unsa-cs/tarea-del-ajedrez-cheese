#include "chess.h"
#include "figures.h"


void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** horizontalSquare = repeatH(join(bSquare, wSquare),4);
  char** reversoHorizontalSquare = reverse(horizontalSquare);
  char** verticalSquare = repeatV(join(bSquare,wSquare),4);
  char** reversoVerticalSquare = reverse(verticalSquare);
  char** unirprueba = flipH(reversoHorizontalSquare);
  char** unir = join(horizontalSquare,reversoHorizontalSquare);
  interpreter(verticalSquare);
}

