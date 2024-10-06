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

  char** union5 = flipV(union2);
  char** union6 = join(union4,union5);
  char** sobrePoner = superImpose(union6,rSquare);

  interpreter(sobrePoner);
  free(bSquare);
  free(jSquare);
  free(rSquare);
}

