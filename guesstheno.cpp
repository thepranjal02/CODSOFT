#include <iostream>
#include<cstdlib>
using namespace std;
int main() {
  int random_number = rand() % 10+1;
  cout << "Guess a number between 1 and 10: ";
  int guess;
  cin >> guess;
  while (guess != random_number) {
    if (guess < random_number) {
      cout << "Your guess is too low. Try again.\n"<<endl;
    } else {
      cout << "Your guess is too high. Try again.\n"<<endl;
    }
    cout << "Guess a number between 1 and 10: "<<endl;
    cin >> guess;
  }
  cout << "Congratulations! You guessed the correct number.\n"<<endl;
  return 0;
}
