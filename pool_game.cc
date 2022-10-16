#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;
// create a program that displays a scoreboard and a shot average for a player in 8 and 9 ball
int takeShot() { // asked player if the shot hit or missed then return true if hit and false if miss
  cout << "Hit [1] or Miss [0] : ";
  bool shot_result {};
  cin >> shot_result;
  while ((shot_result != true) &&
         (shot_result != false)) {
    cout << "Not a choice, Try Again.";
    cin >> shot_result;
  }
  return shot_result;
}
int main() {
  return 0;
}
