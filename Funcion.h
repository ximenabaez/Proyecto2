/// clase Funcion
#pragma once
#include "Hora.h"
#include <string>
#include <iostream>

using namespace std;

class Funcion
{
private:
    string cveFuncion;
    int numPeli;
    Hora hora;
    int sala;
public:
    Funcion(); //constructor por default
    Funcion(string c, int n, Hora h, int s); //constructor por parámetro
    void setCveFuncion(string c);
    void setNumPeli(int n);
    void setHora(Hora h);
    void setSala(int s);
    string getCveFuncion() {return cveFuncion;};
    int getNumPeli() {return numPeli;};
    Hora getHora() {return hora;};
    int getSala() {return sala;};
    void muestra();
};

Funcion::Funcion() //constructor por default
{
    Hora temp(0,0);
    cveFuncion = " ";
    numPeli = 0;
    hora = temp;
    sala = 0;
}
Funcion::Funcion(string c, int n, Hora h, int s) //constructor por parámetro
{
    cveFuncion = c;
    numPeli = n;
    hora = h;
    sala = s;
}
void Funcion::setCveFuncion(string c)
{
    cveFuncion = c;
}
void Funcion::setNumPeli(int n)
{
    numPeli = n;
}
void Funcion::setHora(Hora h)
{
    hora = h;
}
void Funcion::setSala(int s)
{
    sala = s;
}
void Funcion::muestra()
{
    cout<<"Clave: "<<cveFuncion<<endl;
    cout<<"Numero de película: "<<numPeli<<endl;
    hora.muestra();
    cout<<"Sala: "<<sala<<endl<<endl;
}
