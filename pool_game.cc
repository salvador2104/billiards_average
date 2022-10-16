#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;
// create a program that displays a scoreboard and a shot average for a player in 8 and 9 ball

int main() {
  //ask the user to pick from a gamemode
  int game_mode {};
  cout << "\n\nWould you like to play [9]Ball or [10]Ball : ";
  cin >> game_mode;
  //ask the user to say wether he made or missed the ball until the game is over
  bool game_over = true;
  int shots_taken {};
  int shots_made {};
  bool shot_made {};
  while (game_over) {
    cout << "\n\nHit[1] or Miss[2] : ";
    cin >> shot_made;
    if (shot_made) {
      shots_taken += 1;
      shots_made += 1;
    } else {
      shots_taken += 1;
    }
    if (shots_taken == game_mode) {
      game_over = false;
    }
  }
  //tell the user the stats of the game when they are finished
  int matches {};
  double average {};
  average = shots_made / shots_taken;
  cout << "In " << matches << " matches your shot average was " << average << endl;
  //ask the user if he wants to play another game
}
