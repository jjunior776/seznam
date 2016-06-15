#include "clanek.h"
#include "time.h"
#include "stdlib.h"


Clanek::Clanek(){                       // konstruktor clanku, zde se vygeneruje jeden clanek
    srand(time(NULL));
    hodnota = 0;                        // zakladni hodnota bude 0 ... pozdeji se zmeni, napr v generovani seznamu
    dalsiClanek = NULL;                 // pri vytvoreni nikam neukazuje
}


