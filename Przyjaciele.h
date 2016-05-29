#ifndef PRZYJACIELE_H
#define PRZYJACIELE_H

#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
    public:
        Punkt(string="A",float=0,float=0);
        ~Punkt();
        void wczytaj();

    protected:

    private:
        float x,y;
        string nazwa;

    friend void sedzia(Punkt pkt, Prostokat p);
};

class Prostokat
{
    public:
        Prostokat(string="brak",float=0,float=0,float=1,float=1);
        void wczytaj();
    private:
        float x,y,szerokosc,wysokosc;
        string nazwa;

    friend void sedzia(Punkt pkt,Prostokat p);
};
#endif // PRZYJACIELE_H
