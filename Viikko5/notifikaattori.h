#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(seuraaja *);
    void poista(seuraaja *);
    void tulosta();
    void postita(string);
private:
    seuraaja *seuraajat = nullptr;

};

#endif // NOTIFIKAATTORI_H
