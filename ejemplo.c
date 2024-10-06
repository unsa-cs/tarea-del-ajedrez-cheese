#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = flipV(king);
  interpreter(blackKing);
  free(blackKing);
}
