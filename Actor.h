/// clase Actor
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Actor
{
private:
    int id;
    string nombre;
public:
    Actor(); //constructor por default
    Actor(int i, string n); //constructor por parámetros
    void setId(int i);
    void setNombre(string n);
    int getId() {return id;};
    string getNombre() {return nombre;};
    void muestra();
};

Actor::Actor() //constructor por default
{
    id = 0;
    nombre = "Default";
}
Actor::Actor(int i, string n) //constructor por parámetros
{
    id = i;
    nombre = n;
}
void Actor::setId(int i)
{
    id = i;
}
void Actor::setNombre(string n)
{
    nombre = n;
}
void Actor::muestra()
{
    cout<<id<<" "<<nombre<<endl;
}
