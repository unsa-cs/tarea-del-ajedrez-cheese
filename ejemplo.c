#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = rotateR(king);
  interpreter(blackKing);
  free(blackKing);
}
