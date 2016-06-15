#include <iostream>
#include "clanek.h"
#include "seznam.h"
using namespace std;

int main(int argc, char *argv[])
{
    Seznam *seznam = new Seznam(10);                // vytvori se seznam o 10 prvcich
    seznam->nagenerujData(10);                      // naplni ho daty
    seznam->vypisSeznam();                          // vypise
    Clanek *nTyClanek = new Clanek();               // ukazatel na nejaky clanek (aktualne ukazuje na hlavu)
    int n;


    cout << "Kolikaty clanek chces?" << endl;
    cin >> n;
    seznam->clanekNaPozici(n);                      // nastavi seznam->n clanek na hledany clanek na n-te pozici
    nTyClanek = seznam->n;
    cout << "clanek na pozici ";
    cout << n;
    cout << ". ma hodnotu: ";                       // vypise jakou ma hodnotu
    cout << nTyClanek->hodnota;
    cout << endl;

    int novaHodnota;                                // priklad jak lze menit n-temu prvku hodnotu
    cout << "na jakou hodnotu ho chces zmenit ?" << endl;
    cin >> novaHodnota;
    nTyClanek->hodnota = novaHodnota;

    seznam->vypisSeznam();

    return 0;
}

