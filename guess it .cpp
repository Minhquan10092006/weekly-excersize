//
// Created by Admin on 2/28/2025.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int low = 1, high = 100, guess, attempts = 0;

    cout << "I have picked a number between 1 and 100.\n";
    cout << "Try to guess it! I will guide you using Binary Search.\n";

    while (true) {
        cout << "Guess a number in range [" << low << ", " << high << "]: ";
        cin >> guess;
        attempts++;

        if (guess < low || guess > high) {
            cout << "Your guess is out of range! Try again.\n";
            continue;
        }

        if (guess == secretNumber) {
            cout << "Congratulations! You found the number " << secretNumber << " in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try a number higher.\n";
            low = guess + 1;
        } else {
            cout << "Too high! Try a number lower.\n";
            high = guess - 1;
        }
    }

    return 0;
}


