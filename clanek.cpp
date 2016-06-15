#include "clanek.h"
#include "time.h"
#include "stdlib.h"

Clanek::Clanek(Clanek *dalsi)
{
    srand(time(NULL));
    hodnota = rand()%10;
    dalsiClanek = dalsi;
}

Clanek::Clanek(){
    srand(time(NULL));
    hodnota = rand()%10;
    dalsiClanek = NULL;
}


