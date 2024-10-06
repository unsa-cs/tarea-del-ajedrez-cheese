#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = join(queen,king);
  
  interpreter(blackKing);
  free(blackKing);
}
