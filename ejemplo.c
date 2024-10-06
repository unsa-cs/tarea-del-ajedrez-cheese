#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = join(join(queen,king),whiteSquare);
  
  interpreter(blackKing);
  free(blackKing);
}
