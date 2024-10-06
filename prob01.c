/*Primero probamos las funciones dadas en el documento, y se realizo como primera instancia, un cuadrado de color blanco
  despues usando la funcion reverse se crear un cuadrado de color negro. Seguidamente usando la funcion join se unieron los dos
  cuadrados de ambos colores. Finalmente usando la funcion repeatH se repitio 4 veces la imagen unida*/

#include "chess.h"
#include "figures.h"
#include <cstdlib>
void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(wSquare,bSquare);/*hemos hecho la funcion de join para poder poner una a lado de otra */
  char** rSquare = repeatH(join(wSquare, bSquare),4);/*hemos repetido cuatro veces la funcion join y alcanzamos el resultado */

  interpreter(rSquare);
  free(bSquare);
  free(jSquare);
  free(rSquare);
}
