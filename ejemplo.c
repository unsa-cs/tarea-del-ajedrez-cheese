#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
  char** blackKing = repeatV(king,12);
  
  interpreter(blackKing);
  free(blackKing);
}
