#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    seuraaja a("Kalle");
    seuraaja b("Julle");
    seuraaja c("Jaska");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("tama on viesti 1");
    n.poista(&b);
    n.postita("tama on viesti 2");

    return 0;
}
