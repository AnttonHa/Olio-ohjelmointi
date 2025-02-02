#include "luottotili.h"

Luottotili::Luottotili(string omistaja,double l):Pankkitili(omistaja)
{
    luottoRaja = -l;
    cout<<"Luottotili luotu"<<omistaja<<":lle, "<<"luottoraja "<<luottoRaja<<endl;
}

bool Luottotili::deposit(double talletus)
{
    if (talletus > 0) {
        saldo += talletus;
        cout << "Luottotili: talletus " << talletus << " tehty" << endl;
        if (saldo > 0) {
            cout << "Saldo on nyt positiivinen, ei enää luottoa" << endl;
        }
        return true;
    } else {
        cout << "Virheellinen talletus, talletuksen on oltava positiivinen" << endl;
        return false;
    }
}

bool Luottotili::withdraw(double nosto)
{
    if((saldo - nosto)>luottoRaja)
        {
            cout<<"Ei voi ottaa yli luoton"<<endl;
            return false;
        }
    else
        saldo = saldo - nosto;
        cout<<"luottotili: nosto "<<nosto<<endl;
        return true;
}
