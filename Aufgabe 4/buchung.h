#ifndef BUCHUNG_H
#define BUCHUNG_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Buchung
{
public:
    Buchung();
    Buchung(double bertrag_p,string text_p);
    Buchung(int anzahl_p , string wkn);
    double getBetrag() const;


    const string &getText() const;

    void setBetrag(double newBetrag);

    void setText(const string &newText);

    const string &getWertpapiererkennnummer() const;

    int getAnzahl() const;

private:
double betrag;
string text;
int anzahl;
string wertpapiererkennnummer;

};

#endif // BUCHUNG_H
