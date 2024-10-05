/*Primero probamos las funciones dadas en el documento, y se realizo como primera instancia, un cuadrado de color blanco
  despues usando la funcion reverse se crear un cuadrado de color negro. Seguidamente usando la funcion join se unieron los dos
  cuadrados de ambos colores. Finalmente usando la funcion repeatH se repitio 4 veces la imagen unida*/

#include "chess.h"
#include "figures.h"

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = repeatH(join(wSquare, bSquare),4);

  interpreter(jSquare);
}
