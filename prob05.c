#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  char** jSquare = join(bSquare,wSquare);
  char** rSquare = repeatH(jSquare,4);

  char** union1 = join(rook,knight);
  char** union2 = join(union1,bishop);
  char** union3 = join(union2,queen);
  char** union4 = join(union3,king);

  char** union5 = join(union4,bishop);
  char** union6 = join(union5,knight);
  char** union7 = join(union6,rook);
  char** runion7 = reverse(union7);
  char** sobrePoner = superImpose(runion7,rSquare);

  interpreter(sobrePoner);
  free(bSquare);
  free(jSquare);
  free(rSquare);
  free(union1);
  free(union2);
  free(union3);
  free(union4);
  free(union5);
  free(union6);
  free(union7);
  free(runion7);
  free(sobrePoner);
}
