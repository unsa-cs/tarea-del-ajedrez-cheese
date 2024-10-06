#include "chess.h"
#include "figures.h"
#include <stdlib.h>
void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(bSquare,wSquare);/*hemos hecho la funcion de join para poder poner una a lado de otra */
  char** rSquare = repeatH(jSquare,4);/*hemos repetido cuatro veces la funcion join y alcanzamos el resultado */

  interpreter(rSquare);
  free(bSquare);
  free(jSquare);
  free(rSquare);
}


