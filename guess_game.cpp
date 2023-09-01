#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        std::srand(time(0)); 
        int randomNumber = (std::rand() % 100) + 1; 
        int guess;

        std::cout << "Guess the number between 1 and 100: ";

        while (true) {
            std::cin >> guess;
            if (guess < randomNumber) {
                std::cout << "Too low. Try again: ";
            } else if (guess > randomNumber) {
                std::cout << "Too high. Try again: ";
            } else {
                std::cout << "Congratulations! You've guessed the number.\n";
                break;
            }
        }

        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> playAgain;
    }

    return 0;
}