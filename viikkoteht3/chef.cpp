#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(const std::string& name) : chefName(name) {
    cout << "Chef " << chefName << " is ready.\n";
}

Chef::~Chef() {
    cout << "Chef " << chefName << " has cooked.\n";
}

int Chef::makeSalad(int stuff) {
    int salads = stuff / 5;
    cout << "Making " << salads << " salads using " << stuff << " ingridients.\n";
    return salads;
}

int Chef::makeSoup(int stuff) {
    int soups = stuff / 3;
    cout << "Making " << soups << " soups using " << stuff << " ingridients.\n";
    return soups;
}
