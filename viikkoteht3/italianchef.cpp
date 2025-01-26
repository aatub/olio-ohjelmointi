#include "italianchef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    cout << "Italian chef is good at making italian food.\n";
}

bool ItalianChef::askSecret(const std::string& inputPassword, int flour, int water){
    if (inputPassword == password) {
        cout << "Correct password.\n";
        makePizza(flour, water);
        return true;
    } else {
        cout << "Wrong password.\n";
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water) {
    int pizzas = std::min(flour / 5, water / 5);
    cout << "Creating " << pizzas << " pizzas with " << flour << " amounts of flour and " << water << " amounts of water.\n";
    return pizzas;
}

