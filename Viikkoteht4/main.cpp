#include <iostream>
#include "asiakas.h"
#include <string>

using namespace std;

int main() {
    string nimi;
    double talletusSumma;

    cout << "Kenelle pankkitili tehdaan?: ";
    getline(cin, nimi);

    Asiakas asiakas(nimi, 1000);
    cout << "Tilin luonti onnistui! Luottoraja 1000" << endl;
    asiakas.showSaldo();;

    cout << "Paljon haluat tallettaa tilille?: ";
    cin >> talletusSumma;
    asiakas.talletus(talletusSumma);
    cout << "Pankkitilille talletettu -> " << talletusSumma << endl;

    cout << "Asiakas " << asiakas.getNimi() << endl;
    asiakas.showSaldo();

    return 0;
}
