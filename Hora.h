/// clase Hora
#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Hora
{
private:
    int hh, mm;
public:
    Hora(); //constructor por default
    Hora(int h, int m); //constructor por parámetro
    void setHh(int h);
    void setMm(int m);
    int getHh() {return hh;};
    int getMm() {return mm;};
    void muestra();
};

Hora::Hora() //constructor por default
{
    hh = 0;
    mm = 0;
}
Hora::Hora(int h, int m) //constructor por parámetro
{
    hh = h;
    mm = m;
}
void Hora::setHh(int h)
{
    hh = h;
}
void Hora::setMm(int m)
{
    mm = m;
}
void Hora::muestra()
{
    cout<<"Hora: ";
    cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<endl;
}
