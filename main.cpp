#include <iostream>
#include "clanek.h"
#include "seznam.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    Seznam *seznam = new Seznam(10);
    seznam->nagenerujData(10);
    seznam->vypisSeznam();
    return 0;
}

