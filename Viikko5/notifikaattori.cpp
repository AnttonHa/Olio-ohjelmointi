#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout<<"luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(seuraaja * ptr)
{
    if(seuraajat == nullptr)
    {
        seuraajat = ptr;
    }
    else
    {
        ptr->next = seuraajat;
        seuraajat = ptr;
    }
    cout<<"Seuraaja = "<<seuraajat->getNimi()<<endl;

}

void Notifikaattori::poista(seuraaja * ptr)
{
    seuraaja * seuraava = seuraajat;
    while(seuraava != nullptr && seuraava->next != nullptr)
    {
        if(seuraava->next==ptr)
        {
            seuraava->next=seuraava->next->next;
            return;

        }
        seuraava=seuraava->next;
    }
}

void Notifikaattori::tulosta()
{
    cout<< "Notifikaattorin seuraajat: " <<endl;

    seuraaja* current = seuraajat;
    while (current != nullptr) {
        cout<< "Seuraaja " << current->getNimi()<<endl;
        current = current->next;
    }
}

void Notifikaattori::postita(string p)
{
    cout<<"Notifikaattori postaa viestin: "<<p<<endl;

    seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(p);
        current = current->next;
    }
}
