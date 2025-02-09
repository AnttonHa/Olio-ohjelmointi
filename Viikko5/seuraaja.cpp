#include "seuraaja.h"

seuraaja::seuraaja(string n)
{
    nimi = n;
    cout<<"Luodaan seuraaja "<<n<<endl;
}

string seuraaja::getNimi()
{
    return nimi;
}

void seuraaja::paivitys(string viesti)
{
    cout<<"seuraaja "<<nimi<<" sai viestin: "<<viesti<<endl;
}
