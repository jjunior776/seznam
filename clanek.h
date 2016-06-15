#ifndef CLANEK_H
#define CLANEK_H


class Clanek
{
public:
    Clanek(Clanek *dalsi);
    Clanek();
    int hodnota;
    Clanek *dalsiClanek;
};

#endif // CLANEK_H
