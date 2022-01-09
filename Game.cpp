#include "Game.h"

Game::Game() {

}

unsigned int Game::getWinner(string gesturePlayer1, string gesturePlayer2) {
  {
    if (gesturePlayer1 == gesturePlayer2) {
      return 0;
    }

    if (gesturePlayer1 == GESTURE_ROCK && gesturePlayer2 == GESTURE_SCISSORS
        || gesturePlayer1 == GESTURE_PAPER && gesturePlayer2 == GESTURE_ROCK
        || gesturePlayer1 == GESTURE_SCISSORS && gesturePlayer2 == GESTURE_PAPER) {
      return 1;
    }

    return 2;
  }
}

