#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string n, double luottoraja) : nimi(n), luottotili(luottoraja){}

void Asiakas::showSaldo()const{
    cout << nimi << "Pankkitilin saldo: " << pankkitili.getBalance()
         << "- luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount){
    return pankkitili.deposit(amount);
}
bool Asiakas::nosto(double amount){
    return pankkitili.withdraw(amount);
}
bool Asiakas::luotonMaksu(double amount){
    return luottotili.deposit(amount);
}
bool Asiakas::luotonNosto(double amount){
    return luottotili.withdraw(amount);
}
bool Asiakas::tiliSiirto(double amount, Asiakas &vastaanottaja){
    if(nosto(amount)){
        return vastaanottaja.talletus(amount);
    }
    return false;
}
