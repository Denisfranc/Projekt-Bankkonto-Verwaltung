#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <vector>
#include <string>
#include "konto.h"
using namespace std;



class Bank
{
public:
    Bank();
    ~Bank();
    void benutzerDialog();
    void kontoanlegen();



    static const vector<Konto*> &getGirokonten();

private:
  static vector<Konto*> girokonten; // Vector fuer KOnto und Aktien depots



};

#endif // BANK_H
