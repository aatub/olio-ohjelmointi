#include "notif.h"

notif::notif() : seuraajat(nullptr) {}

void notif::lisää(Seuraaja* uusi){
    uusi->next = seuraajat;
    seuraajat = uusi;
}

void notif::poista(string nimi){
    Seuraaja* nykyinen = seuraajat;
    Seuraaja* edellinen = nullptr;

    while(nykyinen != nullptr && nykyinen->nimi !=nimi){
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
    if(nykyinen == nullptr)return;

    if(edellinen == nullptr){
        seuraajat = nykyinen->next;
    }
    else{
        edellinen->next = nykyinen->next;
    }
    delete nykyinen;
}

void notif::tulosta(){
    Seuraaja* nykyinen = seuraajat;
    while(nykyinen != nullptr){
        cout << nykyinen->nimi << endl;
        nykyinen = nykyinen->next;
    }
}

void notif::postita(string viesti){
    Seuraaja* nykyinen = seuraajat;
    while(nykyinen != nullptr){
        nykyinen->päivitys(viesti);
        nykyinen = nykyinen->next;
    }
}


