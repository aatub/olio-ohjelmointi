#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
private:
    string nimi;
    Pankkitili pankkitili;
    Luottotili luottotili;

public:
    Asiakas(string n, double luottoraja);
    void showSaldo() const;
    string getNimi()const{
        return nimi;
    }
    bool talletus (double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto (double amount);
    bool tiliSiirto (double amount, Asiakas &vastaanottaja);

};

#endif // ASIAKAS_H
