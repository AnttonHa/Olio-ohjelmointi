#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"


using namespace std;

int main()
{
    Asiakas asiakas1(" aapeli", 1000);
    Asiakas asiakas2(" Bertta", 1000);

    asiakas1.showSaldo();
    asiakas1.talletus(250);
    asiakas1.nosto(100);
    asiakas1.showSaldo();
    asiakas1.tiliSiirto(50, asiakas2);

    asiakas2.talletus(200);
    asiakas2.nosto(100);
    asiakas2.showSaldo();



    return 0;
}
