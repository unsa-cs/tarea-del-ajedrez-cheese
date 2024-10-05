#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** horizontalSquare = repeatH(join(bSquare, wSquare),4);
  char** torre = superImpose(rook,horizontalSquare);
  char** caballo =superImpose(knight,horizontalSquare);
  char** alfil = superImpose(bishop,horizontalSquare);
  char** reina = superImpose(queen,horizontalSquare);
  char** rey =superImpose(king,horizontalSquare);
  char** unirpiezas  =join(torre,caballo);


  interpreter(unirpiezas);
}
