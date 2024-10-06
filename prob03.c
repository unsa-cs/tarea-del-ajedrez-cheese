#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){ 
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  
  char** jSquare = join(bSquare,wSquare);
  char** rSquare = repeatH(jSquare,4);
  char** jrSquare = reverse(rSquare);
  char** rrSquare = up(rSquare,jrSquare);  
  char** VSquare = repeatV(rrSquare,2);

  interpreter(VSquare);

  free(bSquare);
  free(jSquare);
  free(rSquare);
  free(jrSquare);
  free(rrSquare);
  free(VSquare);

}


