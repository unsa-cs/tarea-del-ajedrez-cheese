#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = flipH(king);
  interpreter(blackKing);
  free(blackKing);
}
