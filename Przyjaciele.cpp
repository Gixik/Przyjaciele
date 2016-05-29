#include <iostream>
#include "Przyjaciele.h"
using namespace std;

Punkt::Punkt(string n,float xx,float yy)
        {
            x = xx;
            y = yy;
            nazwa = n;
        }

Punkt::~Punkt()
{
    //dtor
}

void Punkt::wczytaj()
        {
            cout<<"Podaj x: ";
            cin>>x;
            cout<<"Podaj y: ";
            cin>>y;
            cout<<"Podaj nazwe: ";
            cin>>nazwa;
        }

Prostokat::Prostokat(string n,float xx,float yy,float sz,float wy)
        {
            x = xx;
            y = yy;
            nazwa = n;
            szerokosc = sz;
            wysokosc = wy;
        }

void Prostokat::wczytaj()
        {
            cout<<"Podaj x: ";
            cin>>x;
            cout<<"Podaj y: ";
            cin>>y;
            //cout<<"Podaj nazwe: ";
            //cin>>nazwa;
            cout<<"Podaj szerokosc: ";
            cin>>szerokosc;
            cout<<"Podaj wysokosc: ";
            cin>>wysokosc;
            cout<<nazwa;
        }
