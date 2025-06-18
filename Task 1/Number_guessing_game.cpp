#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));  
    int target = std::rand() % 100 + 1;               
    int guess;

    std::cout << "Guess the number between 1 and 100:\n";

    while (true) {
        std::cout << "Your guess: ";
        std::cin >> guess;

        if (guess < target)
            std::cout << "Too low!\n";
        else if (guess > target)
            std::cout << "Too high!\n";
        else {
            std::cout << "Correct! The number was " << target << ".\n";
            break;
        }
    }

    return 0;
}
