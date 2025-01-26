#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    ItalianChef chef("Mario");

    string userPassword;
    int flour, water;

    cout << "Welcome!\n";
    cout << "Enter the password: ";
    cin >> userPassword;

    cout << "Enter amount of flour: ";
    cin >> flour;

    cout << "Enter amount of water: ";
    cin >> water;

    if (chef.askSecret(userPassword, flour, water)) {
        cout << "Pizza is succesful.\n";
    } else {
        cout << "Access denied. You cannot make pizza.\n";
    }

    return 0;
}
