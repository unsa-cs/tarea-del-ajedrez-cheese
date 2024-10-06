#include "chess.h"
#include "figures.h"
#include <cstdlib>

void display(){ 
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(bSquare,wSquare);/*hemos hecho la funcion de join para poder poner una a lado de otra */
  char** rSquare = repeatH(jSquare,4);/*hemos repetido cuatro veces la funcion join y alcanzamos el resultado */
  char** jrSquare = reverse(rSquare);
  char** rrSquare = up(jSquare,rSquare);  
  char** VSquare = repeatV(rrSquare,2);
  interpreter(jrSquare);
 /* free(bSquare);
  free(jSquare);
  free(rSquare);
  free(jrSquare);
  free(rrSquare);
  */
}


