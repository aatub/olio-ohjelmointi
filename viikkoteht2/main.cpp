#include "game.h"
#include <iostream>

using namespace std;

int main()
{
    int maxNumber;
    cout << "Anna numero minka valista haluat koittaa arvata: ";
    cin >> maxNumber;

    game peli(maxNumber);
    peli.play();
    peli.printGameResult();

    return 0;
}

