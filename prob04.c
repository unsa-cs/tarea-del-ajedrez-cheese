#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** horizontalSquare = repeatH(join(bSquare, wSquare),4);
  char** torre = superImpose(rook,bSquare);
  char** caballo =superImpose(knight,wSquare);
  char** alfil = superImpose(bishop,bSquare);
  char** reina = superImpose(queen,wSquare);
  char** rey =superImpose(king,bSquare);
  char** unirpiezas = join(join(join(join(torre,caballo),join(alfil,reina)),join(rey,alfil)),join(caballo,torre));
  interpreter(unirpiezas);
}
