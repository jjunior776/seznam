#ifndef SEZNAM_H
#define SEZNAM_H

#include "clanek.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"

using namespace std;
class Seznam
{
public:
    Seznam(int pocet);
    Clanek *hlava;
    Clanek *ocas;
    int velikost;
    void vypisSeznam();
    void nagenerujData(int maximum);
    Clanek *n;
    void clanekNaPozici(int pozice);
    int hodnotaNaPozici(int pozice);
    void nastavHodnotuNaPozici(int pozice, int hodnota);
};

#endif // SEZNAM_H
