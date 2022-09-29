#include "buchung.h"

Buchung::Buchung()
{

}
Buchung :: Buchung(double bertrag_p,string text_p)
    :
     betrag(bertrag_p),
     text(text_p)
{}

Buchung::Buchung(int anzahl_p, string wkn)
    :
     anzahl(anzahl_p),
     wertpapiererkennnummer(wkn)
{

}



double Buchung::getBetrag() const
{
    return betrag;
}


const string &Buchung::getText() const
{
    return text;
}

void Buchung::setBetrag(double newBetrag)
{
    betrag = newBetrag;
}

void Buchung::setText(const string &newText)
{
    text = newText;
}

const string &Buchung::getWertpapiererkennnummer() const
{
    return wertpapiererkennnummer;
}

int Buchung::getAnzahl() const
{
    return anzahl;
}


