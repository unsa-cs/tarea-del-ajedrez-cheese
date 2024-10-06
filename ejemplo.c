#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = repeatH(king,7);
  
  interpreter(blackKing);
  free(blackKing);
}
