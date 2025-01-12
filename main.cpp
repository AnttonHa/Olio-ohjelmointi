#include <iostream>

using namespace std;

int game(int maxnum);

int main()
{
    int arvaustenlkm = 0;
    int maxnum = 40;
    arvaustenlkm = game(maxnum);
    cout << "Arvauksia: " << arvaustenlkm << endl;

    return 0;
}

int game(int maxnum) {
    int arvaustenlkm = 0;
    int randnum = 0;
    int arvaus = 0;

    srand(time(NULL));
    randnum = rand() % maxnum;

    while (true) {

        cout << "Anna luku" << endl;
        cin >> arvaus;
        arvaustenlkm++;

        if (arvaus == randnum) {
            cout << "Oikea vastaus" << endl;
            break;
        }
        if (arvaus < randnum){
            cout << "luku on suurempi" << endl;

        }
        if (arvaus > randnum){
            cout << "luku on pienempi" << endl;
        }
    }
    return arvaustenlkm;
}
