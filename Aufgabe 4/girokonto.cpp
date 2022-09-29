#include "girokonto.h"
#include "bank.h"

Girokonto::Girokonto()
{

}

Girokonto ::  Girokonto( double kontostand_par)
    :
     // Kontonummer(kontonummer_par)
      kontostand(kontostand_par)
{}




void Girokonto::buchen()
{
    cout<<"Betrag : ";
    double betrag;
    cin>>betrag;

    cout<<"Buchungs text : ";
    string text;
    cin>>text;

    Buchung *buchung = new Buchung(betrag,text); //kontostand
    this->buchungen.push_back(buchung);



    this->setKontostand(this->getKontostand() + betrag);

    if(this->kontostand >= 0){
        cout<<"Buchung ausgefuehrt. Neuer Kontostand : "<<this->getKontostand()<<endl;
    }
    else{
        cout<<"kein ausreichedes Guthaben fuer diese Buchung\n";
    }
    cout<<endl;
}

void Girokonto::umsaetze(){

    unsigned int  i =0;

    for(;i < this->buchungen.size();i++){
        cout<<" "<<this->buchungen[i]->getText()<<" : "
        <<this->buchungen[i]->getBetrag()<<endl;
    }
    cout<<endl;
}




double Girokonto::getKontostand() const
{
    return kontostand;
}

void Girokonto::setKontostand(double newKontostand)
{   for(size_t i = 0; i<Bank::getGirokonten().size();i++){//damit die kontostand an der
                                                         // an der bestimmte index zugewissen wird
         kontostand = newKontostand;
    }
}

const vector<Buchung *> &Girokonto::getBuchungen() const
{
    return buchungen;
}




