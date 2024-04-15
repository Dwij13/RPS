#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
 srand(time(0));

  int userChoice, computerChoice;

  cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors: ";
  cin >> userChoice;

  while (userChoice < 1 || userChoice > 3) {
    cout << "Invalid input. Please enter 1, 2, or 3: ";
    cin >> userChoice;
  }

  computerChoice = rand() % 3 + 1;


  if (userChoice == computerChoice) {
    cout << "It's a tie!" << endl;
  } else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
    cout << "You win!" << endl;
  } else {
    cout << "You lose!" << endl;
  }

  switch (computerChoice) {
    case 1:
      cout << "Computer chose Rock." << endl;
      break;
    case 2:
      cout << "Computer chose Paper." << endl;
      break;
    case 3:
      cout << "Computer chose Scissors." << endl;
      break;
  }

  return 0;
}
