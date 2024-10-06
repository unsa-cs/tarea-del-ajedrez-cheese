#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = up(king,whiteSquare);
  
  interpreter(blackKing);
  free(blackKing);
}
