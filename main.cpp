#include <iostream>
#include "Game.h"

using namespace std;

int main() {
  Game game;
  string gesturePlayer1 = game.GESTURE_PAPER;
  string gesturePlayer2 = game.GESTURE_SCISSORS;
  cout << gesturePlayer1 << " vs " << gesturePlayer2 << "\nwinner: " << game.getWinner(game.GESTURE_SCISSORS, game.GESTURE_PAPER);
  return 0;
}
