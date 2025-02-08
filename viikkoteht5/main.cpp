#include <iostream>
#include "notif.h"

using namespace std;

int main()
{
    notif notif;
    notif.lisää(new Seuraaja("Franz"));
    notif.lisää(new Seuraaja("Albert"));
    notif.lisää(new Seuraaja("Fyodor"));

    cout << "seuraajat: " << endl;
    notif.tulosta();

    cout << "\nLähetetään viesti..." << endl;
    notif.postita("Moi kaikille");

    cout << "\nPoistetaan Fyodor..." << endl;
    notif.poista("Fyodor");
    notif.tulosta();

    return 0;
}
