#ifndef KONTO_H
#define KONTO_H
#include <iostream>
#include <string>
using namespace std;


class Konto
{
public:
    Konto();
    static int count;
    const string &getKontonummer() const;

    virtual void buchen() = 0; // pure virtual
    virtual void umsaetze() {}; // virtual



private:
    string kontonummer;

};

#endif // KONTO_H
