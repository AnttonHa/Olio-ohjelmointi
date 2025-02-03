#include "asiakas.h"

Asiakas::Asiakas(string n,double l): kayttotili(n), luottotili(n,l)
{
    nimi = n;
    cout<<"Asiakkuus luotu "<<nimi<<" :lle"<<endl;
}

string Asiakas::getNimi()
{
    return nimi;

}

void Asiakas::showSaldo()
{
    cout << nimi << " Pankkitili saldo: " << kayttotili.getBalance() << " euroa" << endl;
    cout << nimi << " Luottotili saldo: " << luottotili.getBalance() << " euroa" << endl;
}

bool Asiakas::talletus(double summa)
{
    if (summa > 0) {
        return kayttotili.deposit(summa);
    }
    cout << "Talletus epäonnistui, summa ei voi olla negatiivinen." << endl;
    return false;

}

bool Asiakas::nosto(double summa)
{
    if (summa > 0) {
        return kayttotili.withdraw(summa);
    }
    cout << "Nosto epäonnistui, summa ei voi olla negatiivinen." << endl;
    return false;
}

bool Asiakas::luotonMaksu(double summa)
{
    if (summa > 0) {
        return luottotili.deposit(summa);
    }
    cout << "Luoton maksaminen epäonnistui, summa ei voi olla negatiivinen." << endl;
    return false;
}

bool Asiakas::luotonNosto(double summa)
{
    if (summa > 0) {
        return luottotili.withdraw(summa);
    }
    cout << "Luoton nosto epäonnistui, summa ei voi olla negatiivinen." << endl;
    return false;
}

bool Asiakas::tiliSiirto(double summa, Asiakas & vastaanottaja)
{
    if (summa > 0) {
        if (kayttotili.withdraw(summa)) { 
            cout << "Pankkitili: " << nimi << " siirtaa " << summa << " " << vastaanottaja.getNimi() << ":lle" << endl;
            vastaanottaja.talletus(summa);
        } else {
            cout << "Ei riittävästi varoja siirtoon!" << endl;
        }
    } else {
        cout << "Siirrettävän summan on oltava positiivinen!" << endl;
    }
}
