#include "chess.h"
#include "figures.h"
#include <cstdlib>
void display()
{
  char** wSquare =whiteSquare;
  char** bSquare = reverse(wSquare);
  char** caballoBlanco1 = superImpose(knight,wSquare);
  char** caballoBlanco2 = superImpose(knight,bSquare);
  char** piezasIzquierda1 = join(join(join(bSquare, rotateR(caballoBlanco1)),bSquare),wSquare);
  char** piezasIzquierda2 = join(join(join(bSquare, rotateR(rotateR(caballoBlanco1))), bSquare), wSquare);
  char** piezasDerecha1 = join(join(join(bSquare,wSquare), rotateL(caballoBlanco2)),wSquare);
  char** piezasDerecha2 = join(join(join(bSquare,wSquare ), caballoBlanco2),wSquare);

  char** primeraFila1 = join(piezasIzquierda1, piezasDerecha1);
  char** primeraFila2 = join(piezasIzquierda2, piezasDerecha2);
  char** unir=join(primeraFila1,primeraFila2);
  interpreter(unir);
  // Liberación de memoria
  free(bSquare);
  free(caballoBlanco1);
  free(caballoBlanco2);
//  free(caballoNegro1);
//  free(caballoNegro2);
  free(unir);
  }


