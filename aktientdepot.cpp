#include "aktientdepot.h"

AktientDepot::AktientDepot()
{

}
AktientDepot :: AktientDepot (int bestand_p)//,string wkn )
    :
     bestand(bestand_p)
    // wertpapierErkennNummer(wkn)

{

}

void AktientDepot::buchen()
{
    cout<<"Wertpapiererkennnummer : ";
    string wkn ;
    cin>>wkn;

    cout<<"Anzahl : ";
    int anzahl;
    cin>>anzahl;



    Buchung *buchung = new Buchung(anzahl,wkn);
    this->buchungen.push_back(buchung);


    this->setBestand(this->getBestand() + anzahl);

    if(this->bestand >= 0){
        cout<<anzahl<<" Stuecke gebucht. Neuer Bestand von Aktie  "<< wkn<< " : "<<this->getBestand()<<endl;
    }
    else{
        cout<<"kein ausreicheder Bestand im Depot\n";
    }
    cout<<endl;
}

void AktientDepot :: umsaetze(){

    unsigned int  i =0;

    for(;i < this->buchungen.size();i++){
        cout<<" WKN :  "<<this->buchungen[i]->getWertpapiererkennnummer()<<" \t "
        << " Menge : "<<this->buchungen[i]->getAnzahl()<<endl;
    }
    cout<<endl;
}

int AktientDepot::getBestand() const
{
    return bestand;
}

void AktientDepot::setBestand(int newBestand)
{  for(size_t i = 0; i < Bank::getGirokonten().size(); i++){
         bestand = newBestand;
    }
}

const vector<Buchung *> &AktientDepot::getBuchungen() const
{
    return buchungen;
}





