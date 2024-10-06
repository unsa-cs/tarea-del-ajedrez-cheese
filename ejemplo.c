#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = reverse(king);
  interpreter(blackKing);
  free(blackKing);
}
