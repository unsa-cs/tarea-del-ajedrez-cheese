#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = rotateL(king);
  interpreter(blackKing);
  free(blackKing);
}
