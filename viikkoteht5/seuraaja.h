#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
#include <string>

using namespace std;

class Seuraaja
{
public:
    string nimi;
    Seuraaja* next;
    Seuraaja(string n);
    void päivitys(string viesti);
};

#endif // SEURAAJA_H
