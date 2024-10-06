#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(bSquare, wSquare);
  char** rSquare = repeatH(jSquare, 4);
  char** jrSquare = reverse(rSquare);
  char** rrSquare = up(rSquare, jrSquare);
  char** completoSquare = repeatV(rrSquare, 4);

  char** superReina1 = superImpose(queen, bSquare);
  char** primeraFila = join(superReina1, jrSquare);

  char** segundaIzquierda = repeatH(jSquare, 2);
  char** superReina2 = superImpose(queen, bSquare);
  char** segundaDerecha = join(superReina2, jrSquare);
  char** segundaFila = join(segundaIzquierda, segundaDerecha);

  char** superReina3 = superImpose(queen, bSquare);
  char** terceraIzq1 = repeatH(jSquare, 3);
  char** rTerceraIzq1 = reverse(terceraIzq1);
  char** terceraIzq2 = join(rTerceraIzq1, wSquare);
  char** terceraFila = join(terceraIzq2, superReina3);

  char** superReina4 = superImpose(queen, wSquare);
  char** cuartaIzq1 = repeatH(jSquare, 2);
  char** cuartaIzq2 = join(cuartaIzq1, bSquare);
  char** cuartaDer1 = join(cuartaIzq2, superReina4);
  char** cuartaFila = join(cuartaDer1, jSquare);

  interpreter(cuartaFila);
}

