#ifndef GIROKONTO_H
#define GIROKONTO_H
#include <iostream>
#include "buchung.h"
#include "konto.h"
#include <vector>
#include <string>
using namespace std;


class Girokonto : public Konto
{
public:
    Girokonto();
    Girokonto( double kontostand_par);

    void buchen();
    void umsaetze();


    double getKontostand() const;
    void setKontostand(double newKontostand);





    const vector<Buchung *> &getBuchungen() const;

private :

    double kontostand = 0;
    vector<Buchung*> buchungen;

};

#endif // GIROKONTO_H
