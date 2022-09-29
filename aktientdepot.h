#ifndef AKTIENTDEPOT_H
#define AKTIENTDEPOT_H
#include <iostream>
#include <string>
#include <vector>
#include "bank.h"
#include "konto.h"
#include "buchung.h"
using namespace std;


class AktientDepot : public Konto
{
public:
    AktientDepot();
    AktientDepot (int bestand_p );//, string WKN);

    void buchen();
    void umsaetze();


    int getBestand() const;
    void setBestand(int newBestand);

    const vector<Buchung *> &getBuchungen() const;




private :
    int bestand = 0;
    vector<Buchung*>buchungen;
};

#endif // AKTIENTDEPOT_H
