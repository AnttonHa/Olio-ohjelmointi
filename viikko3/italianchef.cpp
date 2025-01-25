#include "italianchef.h"

ItalianChef::ItalianChef(string name):Chef(name)
{

    cout<< "italianchefname = " <<chefName<<endl;
}

ItalianChef::~ItalianChef() {

}

bool ItalianChef::askSecret(string p, int flour, int water) {
    cout<<"what is the password"<<endl;
    cin>>p;
    if(p == password) {
        cout<<"Password ok"<<endl;
        makepizza(flour, water);
        return true;
    }
    else {
        cout<<"password not ok"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int flour, int water) {
    int pizza = (flour/5, water/5);
    cout<<"Chef "<<chefName<<" can make "<<pizza<<" portions of pizza"<<endl;
    return pizza;
}
