#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H

#include <iostream>

using namespace std;

class Game {
public:
  string GESTURE_ROCK = "rock";
  string GESTURE_PAPER = "paper";
  string GESTURE_SCISSORS = "scissors";

public:
  Game();
  unsigned int getWinner(string gesturePlayer1, string gesturePlayer2);

};


#endif //ROCKPAPERSCISSORS_GAME_H
