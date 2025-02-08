#ifndef NOTIF_H
#define NOTIF_H
#include "seuraaja.h"

class notif
{
private:
    Seuraaja* seuraajat;

public:
    notif();
    void lisää(Seuraaja* uusi);
    void poista(string nimi);
    void tulosta();
    void postita(string viesti);
};

#endif // NOTIF_H
