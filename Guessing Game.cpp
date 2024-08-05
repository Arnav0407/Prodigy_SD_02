#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGame()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int numberToGuess = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (userGuess != numberToGuess)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfTries++;

        if (userGuess < numberToGuess)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > numberToGuess)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << numberOfTries << " tries." << endl;
        }
    }
}

int main()
{
    char playAgain = 'y';

    do
    {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing! Goodbye!" << endl;

    return 0;
}
