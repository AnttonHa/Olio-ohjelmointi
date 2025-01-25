#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Ramsey");
    kokki.makeSalad(15);
    kokki.makeSoup(12);
    ItalianChef kokki2("Mario");
    kokki2.makeSalad(100);
    kokki2.askSecret("pizza",20,20);


    return 0;
}
