#include "chess.h"
#include "figures.h"

void display(){
  char** blackKing = reverse(king);
  interpreter(blackKing);
}
