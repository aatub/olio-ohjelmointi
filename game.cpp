#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

game::game(int maxNumber) {

    this->maxNumber = maxNumber;

    srand(time(0));
    randomNumber = rand() % maxNumber + 1;

    playerGuess = 0;
    numOfGuesses = 0;

    cout << "Game constructor: initialized with " << maxNumber << " as a maximum value." << endl;
}

void game::play() {

    do {
        cout << "arvaa luku valilta 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "luku pitaa olla suurempi kuin " << playerGuess << endl;
        }
        else if (playerGuess > randomNumber) {
            cout << "luku pitaa olla pienempi kuin " << playerGuess << endl;
        }
    }
    while (playerGuess != randomNumber);
}

void game::printGameResult(){
    cout << "arvasit oikein. " << randomNumber << " oli oikea luku" << endl;
    cout << "tarvitsit " << numOfGuesses << " yritysta" << endl;
}

game::~game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
