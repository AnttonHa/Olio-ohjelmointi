#include "pankkitili.h"

Pankkitili::Pankkitili(string omistaja)
{

    cout<<"Pankkitili luotu"<<omistaja<<":lle"<<endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double talletus)
{
    saldo = talletus + saldo;
    cout<<"Pankkitili: talletus "<<talletus<<" tehty"<<endl;
    return true;
}

bool Pankkitili::withdraw(double nosto)
{
    cout<<nosto<<" Euron nosto"<<endl;
    if (nosto > saldo){
        cout<<"Ei tarpeeksi rahaa tililla"<<endl;
        return false;
    }
    else
    saldo = saldo - nosto;
    return true;

}
