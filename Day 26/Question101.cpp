#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number!" << endl;
            cout << "You guessed it in " << attempts << " attempts." << endl;
        }

    } while (guess != number);

    return 0;
}
