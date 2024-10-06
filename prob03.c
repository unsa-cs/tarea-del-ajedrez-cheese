#include "chess.h"
#include "figures.h"
#include <cstdlib>

void display(){ 
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);
  
  char** jSquare = join(bSquare,wSquare);
  char** rSquare = repeatH(jSquare,2);
  char** jrSquare = reverse(rSquare);
  char** rrSquare = up(jSquare,wSquare);  
  //char** VSquare = repeatV(rrSquare,2);
/*
  char** hSquare=join(bSquare, wSquare);
  char** horizontalSquare = repeatH(hSquare,4);
  char** reversoHorizontalSquare = reverse(horizontalSquare);  
  char** horizontalUp = up(horizontalSquare,reversoHorizontalSquare);*/  
  interpreter(rrSquare);

  /* free(bSquare);
  free(jSquare);
  free(rSquare);
  free(jrSquare);
  free(rrSquare);
  */
}


