#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jinvertidoSquare = join(bSquare, wSquare);
  interpreter(jinvertidoSquare);
}
