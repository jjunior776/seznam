#include "seznam.h"
#include "time.h"
Seznam::Seznam(int pocet)                           // konstruktor seznamu, ocekava velikost seznamu
{
    srand(time(NULL));                              // rika ze random bude urcen casovou konstantou
    velikost = pocet;                               // nastavime velikost seznamu
    Clanek *docasny;                                // docasny clanek ktery pouzivame jako ukazatel na predchozi clanek kteremu nastavime dalsiClanek jako novy clanek
    for(int i=0;i<pocet;i++){                       // v cyklu bude pocet-krat vygenerovan clanek
        if(i==0){                                   // pokud je cyklus na zacatku vytvari hlavu, hlava slouzi jako odrazovy mustek seznamu
            hlava = new Clanek();
            docasny = hlava;                        // nastavime docasny jako hlavu protoze pri vygenerovani dalsiho clanku chceme aby hlava ukazovala na
        }                                           // dalsi clanek
        else if(i==(pocet-1)){                      // posledni prvek je ocas
            ocas = new Clanek();
            docasny->dalsiClanek = ocas;
        }
        else{
            Clanek *clanek = new Clanek();          // vytvori se novy clanek
            docasny->dalsiClanek = clanek;          // predchozi clanek na nej bude ukazovat
            docasny = clanek;
        }
    }
    n = hlava;                                      // pokud nekdy budeme chtit nejaky clanek a nepouzijeme vyhledavani tak aby nenastala chyba bude defaultne hlava nejaky clanek
}

void Seznam::vypisSeznam()                          // postupne projde cely seznam a vypise vsechny data
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

void Seznam::nagenerujData(int maximum)             // do kazdeho clanku nageneruje nahodnou cislici kde maximalni hodnota bude maximum
{
    Clanek *docasny = hlava;
    for(int i=0;i<velikost;i++){
        docasny->hodnota = rand()%maximum;
        docasny = docasny->dalsiClanek;
    }
}

void Seznam::clanekNaPozici(int pozice)             // najde clanek ktery chceme na pozici pozice a nastavi jeho ukazatel do Seznam->n .. zde potom jde menit hodnota
{
    if(pozice>velikost){                            // pokud si debil a napsal si vetsi cislo nez je velikost seznamu tak si to podelal
        cout << "chyba! pozice je vetsi nez velikost!!(out of range)";
    }
    else{
        Clanek *docasny = hlava;
        for(int i=0;i<pozice-1;i++){
            docasny = docasny->dalsiClanek;
        }
        n = docasny;
    }
}


