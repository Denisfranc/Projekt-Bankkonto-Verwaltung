#include "bank.h"
#include "girokonto.h"
#include "aktientdepot.h"

Bank::Bank()
{

}

Bank::~Bank()
{

}

void Bank::benutzerDialog()
{
    cout<<"1: Konto anlegen\n"
          "2: Kontobuchung\n"
          "3: Umsaetze anzeigen\n"
          "0: Programm beenden\n\n";

    string kontonum;
    int auswahl;


    do{ cout<<"Auswahl : ";
        cin>>auswahl;
        switch(auswahl){
        case 1 : {
            cout<<"Konto Nummer anlegen\n ";

            kontoanlegen();
        }
            break;
        case 2 : {
            cout<<"Konto Buchungen \n";
            cout<<"Konto Nummer : ";
            cin>>kontonum;
            bool found = false;
            for(auto & s : girokonten){
                if(s->getKontonummer() == kontonum) {
                    found = true;
                    s->buchen();
                }
            }

            if(!found) {
                cout << "Konto existiert nicht!!" << endl;
            }

            break;
        }

        case 3 : { cout<<"Umsaetze\n\n";
            cout<<"Konto Nummer : ";
            cin>>kontonum;
            bool found = false;
            for(auto & s : girokonten){
                if(s->getKontonummer() == kontonum){
                    found = true;
                    s->umsaetze();
                }
            }
            if(!found) {
                cout << "Konto existiert nicht!!" << endl;
            }

             break;

        }
        case 0 : {
            cout<<"Beendet\n\n";
            exit((-1));
            break;

        }
        default :{
            cout<<"Falsche Eingabe \n\n";
            benutzerDialog();
        }



        }

    }while(auswahl!=0);

}
 void Bank::kontoanlegen(){
        char auswahl;
        cout <<" Girokonto (G) or Aktiendepot (A) : ";
        cin>>auswahl;

        if(auswahl == 'G' || auswahl == 'g'){
        Girokonto *girokonto = nullptr;

        girokonto = new Girokonto();
        girokonten.push_back(girokonto);
        cout << "Konto mit Nummer " << girokonto->getKontonummer() << " anngelegt\n\n";
    }
        else if(auswahl == 'A' || auswahl == 'a'){
            AktientDepot * aktiendepot = nullptr;

            aktiendepot = new AktientDepot();
            girokonten.push_back(aktiendepot);
            cout << "Aktiendepot mit Nummer " << aktiendepot->getKontonummer() << " anngelegt\n\n";

        }

 }






vector<Konto*> Bank ::  girokonten {};

const vector<Konto*> &Bank::getGirokonten()
{
    return girokonten;
}


