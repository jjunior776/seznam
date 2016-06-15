#include "seznam.h"
#include "time.h"
Seznam::Seznam(int pocet)
{
    srand(time(NULL));
    velikost = pocet;
    Clanek *docasny;
    for(int i=0;i<pocet;i++){
        if(i==0){
            hlava = new Clanek();
            docasny = hlava;
        }
        else if(i==(pocet-1)){
            ocas = new Clanek();
            docasny->dalsiClanek = ocas;
        }
        else{
            Clanek *clanek = new Clanek();
            docasny->dalsiClanek = clanek;
            docasny = clanek;
        }
    }
    n = hlava;
}

void Seznam::vypisSeznam()
{
    cout << "[";
    Clanek *docasny = hlava;
    while(docasny!=ocas){

        cout << docasny->hodnota;
        cout << ";";
        docasny=docasny->dalsiClanek;
    }
    cout << docasny->hodnota;
    cout << "]" << endl;
}

void Seznam::nagenerujData(int maximum)
{
    Clanek *docasny = hlava;
    for(int i=0;i<velikost;i++){
        docasny = docasny->dalsiClanek;
        docasny->hodnota = rand()%maximum;
    }
}

void Seznam::clanekNaPozici(int pozice)
{
    /*if(pozice>velikost){
        cout << "chyba! pozice je vetsi nez velikost!!(out of range)";
    }
    else{
        Clanek *docasny = hlava;
        for(int i=1;i<pozice-1;i++){
            docasny = docasny->dalsiClanek;
        }
        n = docasny;
    }*/
}


