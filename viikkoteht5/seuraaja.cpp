#include "seuraaja.h"

Seuraaja::Seuraaja(string n) : nimi(n), next(nullptr) {}

void Seuraaja::päivitys(string viesti){
    cout << nimi << " sai viestin: " << viesti << endl;
}
