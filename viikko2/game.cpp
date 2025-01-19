#include "game.h"

Game::Game(int n) {
    cout<<"aloitettaan peli"<<endl;
    maxNumber = n;
    numOfGuesses = 0;
    srand(time(NULL));
    randomNumber = rand()%100+1;

}

Game::~Game() {
    cout<<"peli loppui"<<endl;
}

void Game::play() {

    while (true) {

        cout << "Anna arvaus 1-100 valilta" << endl;
        cin >> maxNumber;
        numOfGuesses++;

        if (maxNumber == randomNumber) {
            cout << "Oikea vastaus" << endl;
            break;
        }
        if (maxNumber < randomNumber){
            cout << "luku on suurempi" << endl;

        }
        if (maxNumber > randomNumber){
            cout << "luku on pienempi" << endl;
        }
    }


    printGameResult();

}

void Game::printGameResult() {
    cout<<"Guesses: "<<numOfGuesses<<endl;

}
