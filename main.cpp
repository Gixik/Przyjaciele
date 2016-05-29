#include <iostream>
#include "Przyjaciele.h"

using namespace std;

void sedzia(Punkt pkt,Prostokat p)
{
    p.nazwa = "Podmiana";
    if ((pkt.x>=p.x) && (pkt.x<p.x+p.szerokosc)
        && (pkt.y>=p.y) && (pkt.y<p.y+p.wysokosc))
        cout<<"Ten punkt nalezy do prostokata!"<<endl;
    else
        cout<<"Ten punkt nie nalezy do prostokata!"<<endl;

}

int main()
{
    Punkt pkt1("A",3,17);
    //pkt1.wczytaj();
    Prostokat p1("prostokat",0,0,6,4);
    sedzia(pkt1,p1);
    p1.wczytaj();


    return 0;
}
