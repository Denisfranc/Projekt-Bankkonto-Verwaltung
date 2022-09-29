#include "konto.h"
int Konto ::count =1;

Konto::Konto()
{
  string countstr = to_string(count);
  kontonummer = countstr;
  while(kontonummer.length()!=10){
      kontonummer = "0" + kontonummer;
  }
  count++;


}



const string &Konto::getKontonummer() const
{
    return kontonummer;
}



