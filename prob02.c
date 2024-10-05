#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jinvertidoSquare = repeatH(join(bSquare, wSquare),4);
  interpreter(jinvertidoSquare);
}
