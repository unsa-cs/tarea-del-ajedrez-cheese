#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(bSquare,wSquare); 
  char** tableroDos = up(jSquare, reverse(jSquare));
  char** caballo2 = rotateL(knight);
  char** caballo3 = rotateL(caballo2);
  char** caballo4 = rotateL(caballo3);
  char** caballoArriba = join(knight, caballo2);
  char** caballoAbajo = join(caballo3, caballo4);
  char** unionCaballo = up(caballoArriba, caballoAbajo);
  char** superCaballo = superImpose(unionCaballo, tableroDos);
  interpreter(superCaballo);
  free(bSquare);
  free(jSquare);
  free(tableroDos);
  free(caballo2);
  free(caballo3);
  free(caballo4);
  free(caballoArriba);
  free(caballoAbajo);
  free(unionCaballo);
  free(superCaballo);
}


