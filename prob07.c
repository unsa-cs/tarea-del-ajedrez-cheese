#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** wSquare = whiteSquare;
  char** bSquare = reverse(whiteSquare);

  char** jSquare = join(bSquare,wSquare);
 // char** rSquare = repeatH(jSquare,1);
 // char** jrSquare = reverse(rSquare);
  //char** rrSquare = up(rSquare,jrSquare);
  //char** repetir= repeatV(rrSquare,1);  
 
 
  char** tableroDos = up(jSquare, reverse(jSquare));

  char** caballo1 = knight;
  char** caballo2 = rotateL(caballo1);
  char** caballo3 = rotateL(caballo2);
  char** caballo4 = rotateL(caballo3);

  char** caballoArriba = join(caballo1, caballo2);
  char** caballoAbajo = join(caballo3, caballo4);

  char** unionCaballo = up(caballoArriba, caballoAbajo);

  char** superCaballo = superImpose(unionCaballo, tableroDos);
  
  //char** caballonegro= reverse(knight);
 // char** sobreponer= superImpose(knight,wSquare);
 // char** rotacaballo=rotateL(sobreponer);
 // char** union1=superImpose(rotacaballo, repetir);
  interpreter(superCaballo);
  }

