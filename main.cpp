#include "game.h"
#include <iostream>

using namespace std;

int main()
{
    int maxNumber;
    cout << "Anna luku minka valista haluat koittaa arvata: ";
    cin >> maxNumber;

    game peli(maxNumber);
    peli.play();
    peli.printGameResult();

    return 0;
}

