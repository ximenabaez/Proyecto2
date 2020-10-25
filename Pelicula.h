#pragma once
#include "Actor.h"
#include <string>
#include <iostream>

using namespace std;

class Pelicula
{
private:
    int numPeli;
    string titulo;
    int anio;
    int duracion;
    string genero;
    int cantActores;
    Actor listaActores[10];
public:
    Pelicula(); //constructor por default
    //Pelicula(int n, string t, int a, int d, string g); //constructor por parámetro
    void setNumPeli(int n);
    void setTitulo(string t);
    void setAnio(int a);
    void setDuracion(int d);
    void setGenero(string g);
    int getNumPeli() {return numPeli;};
    string getTitulo() {return titulo;};
    int getAnio() {return anio;};
    int getDuracion() {return duracion;};
    string getGenero() {return genero;};
    int getCantActores();
    Actor getListaActores(int x);
    bool addListaActores(Actor y);
};

Pelicula::Pelicula() //constructor por default
{
    numPeli = 0;
    titulo = "Default";
    anio = 0;
    duracion = 0;
    genero = "Default";
    cantActores = 0;
    //listaActores[10];
    Actor arr[10];
    for (int i = 0; i<10; i++)
    {
        arr[i].setId(0);
        arr[i].setNombre(" ");
        listaActores[i] = arr[i];
    }
}
/*Pelicula::Pelicula(int n, string t, int a, int d, string g) //constructor por parámetro
{
    numPeli = n;
    titulo = t;
    anio = a;
    duracion = d;
    genero = g;
}*/
void Pelicula::setNumPeli(int n)
{
    numPeli = n;
}
void Pelicula::setTitulo(string t)
{
    titulo = t;
}
void Pelicula::setAnio(int a)
{
    anio = a;
}
void Pelicula::setDuracion(int d)
{
    duracion = d;
}
void Pelicula::setGenero(string g)
{
    genero = g;
}
int Pelicula::getCantActores()
{
    for (int i=0; i<10;)
    {
        if (listaActores[i].getId() == 0)
        {
            cantActores = i;
            return cantActores;
        }
        else
        {
            i++;
        }
    }
    cantActores = 10;
    return cantActores;
}
Actor Pelicula::getListaActores(int x)
{
    return listaActores[x];
}
bool Pelicula::addListaActores(Actor y)
{
    if (getListaActores(9).getId() != 0)
    {
        cout<<"Operación invalida (lista llena)"<<endl;
        return false;
    }
    else if (getListaActores(9).getId() == 0)
    {
        for (int i=0; i<10; i++)
        {
            if (((getListaActores(i).getNombre() == y.getNombre() && getListaActores(i).getId() == y.getId()) || (getListaActores(i).getNombre() == y.getNombre() || getListaActores(i).getId() == y.getId())))
            {
                cout<<"Operación invalida (actor repetido)"<<endl;
                return false;
            }
            else if (y.getId() == 0)
            {
                cout<<"Operación invalida (id invalido)"<<endl;
                return false;
            }
            else
            {
                if (getListaActores(i).getId() == 0)
                {
                    listaActores[i] = y;
                    return true;
                }
            }
        }
    }
    return 0;
}
