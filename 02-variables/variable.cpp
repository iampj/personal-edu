#include <iostream>

int main() {
    // initializing variables 
    // with the desired variable name and assigning the value
    int score = 0;
    int health = 3;
    std::string name;
    // pew pew
    // '++' adds 1 to the specified variable
    score++;
    // ouch
    // '--' subtracts 1 from the specified variable
    health--;
    
    
    // hard setting values
    score = 0;
    // addition
    score = 4 + 2;
    // subraction
    score = 4 - 2;
    // multiplication
    score = 4 * 2;
    // division
    score = 4 / 2;
    // modulus
    score = 5 % 2;

    std::cout << "Health: " << health << "\n";
    std::cout << "Score: " << score << "\n";

    // to capture info to be stored in variables we use cin
    std::cout << "Well fought warrior what is your name?\n" 
    << "Your name: ";
    std::cin >> name;
    std::cout << "Nice to meet ya " << name << ".\n";
    
}