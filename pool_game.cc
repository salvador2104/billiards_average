#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;
void indent() {
  cout << endl;
}
void printDivider (){
  cout << "     |     ";
}
void formatGame(int game_mode) {
  printDivider();
  cout << "Gamemode [" << game_mode << " ball]";
  printDivider();
  indent();
  cout << "Shot";
  printDivider();
  cout << "Hit [1] or Miss [0]?";
  printDivider();
  cout << "Average";
  indent();
}
int takeShot(int shot_number) {
  cout << "Shot " << shot_number;
  printDivider();
  bool shot_result {};
  cin >> shot_result;
  int shots_made {};
  int shots_taken {};
  if (shot_result == true){
    shots_made += 1;
    shots_taken += 1;
  } else {
    shots_taken += 1;
  }
  printDivider();
  double average {};
  average = (shots_made / shots_taken);
  cout << average;
  return shots_made;
}
int main(int argc, char* argv[]){
  cout << "Will you be playing [8] ball, [9] ball, or [10] ball";
  int game_mode {};
  cin >> game_mode;
  if (game_mode == 8){
    formatGame(game_mode);
    bool keep_playing {true};
    while(keep_playing) {
      int shot_number {1};
      int shots_made {};
      shots_made = takeShot(shot_number);
      shot_number += 1;
      
      if (shots_made >= 17) {
        keep_playing = false;
        return 0;
      }
    }
  }
  return 0;
}
