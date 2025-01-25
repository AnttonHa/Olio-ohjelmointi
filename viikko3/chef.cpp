#include "chef.h"

Chef::Chef(string name) {
    chefName= name;
    cout<<"chef "<< chefName <<" konstruktori"<<endl;
}

Chef::~Chef() {
    cout<<"chef "<< chefName <<" destruktori"<<endl;
}

string Chef::getName() {
    return "";
}

int Chef::makeSalad(int saladIng) {
    int portions = saladIng/5;
    if(portions >= 1){
        cout<<"Chef "<<chefName<<" with "<<saladIng<<" items can make salad "<<portions<<" portions"<<endl;
    }
    return portions;
}

int Chef::makeSoup(int soupIng) {
    int portions = soupIng/3;
    if(portions >= 1){
        cout<<"Chef "<<chefName<<" with "<<soupIng<<" items can make soup "<<portions<<" portions"<<endl;
    }
    return portions;
}
