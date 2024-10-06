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
  char** repetir= repeatV(rrSquare,4);  
  char** caballonegro= reverse(knight);
  char** sobreponer= superImpose(knight,wSquare);
  char** rotacaballo=rotateL(sobreponer);
  char** union1=superImpose(repetir,rotacaballo);
  interpreter(union1);
  }

