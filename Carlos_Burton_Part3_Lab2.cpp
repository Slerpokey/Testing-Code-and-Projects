#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() { // Start of main

  char Player;
  char Robot;
  int random;
  
// Seed
  srand(time(0));
// Computer turn
  random = rand() % 3; // Limit values to 0,1,2

  if (random == 0)
    Robot = 'S';
  else if(random == 1)
    Robot = 'R';
  else if(random == 2)
    Robot = 'P';
  else 
    Robot = '0';
    
  cout << "Do you choose Scissor(0), Rock(1), Paper(2)? ";
  cin >> Player;
  
  // Find winner
  if (Robot == 'S'){ // Scissors condition
    if (Player == 'S')
      cout << "Tie!";
    else if (Player == 'R')
      cout << "You won! Rock smashes scissors";
    else
      cout << "You lose! Scissors cuts paper";
  } 
  
  if(Robot == 'R'){ // Rock condiditon
    if(Player == 'R')
      cout << "Tie!";
  else if(Player == 'P')
    cout << "You won! Paper covers rock";
  else
    cout << "You lose! Rock smashes scissors";
  }

if(Robot == 'P'){ // Paper condition
  if(Player == 'P')
    cout << "Tie!";
  else if(Player == 'R')
    cout << "You lose! Paper cover rock";
  else
    cout << "You won! Scissors cuts paper";
}
  }// End of main