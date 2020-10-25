#pragma once
#include "Actor.h"
#include "Pelicula.h"
#include "Hora.h"
#include "Funcion.h"

bool asignarActor(int arrId[], Actor arrAct[], Pelicula arrPeli[], int num, int i, int j)
{
    if (arrId[num] == arrAct[j].getId())
    {
        Actor a1;
        a1.setId(arrAct[j].getId());
        a1.setNombre(arrAct[j].getNombre());
        arrPeli[i].addListaActores(a1);
        //cout<<a1.getId()<<" "<<a1.getNombre()<<endl;
    }
    return false;
}
// --------------------------------------------------------------------------
bool asignarActor2(int arrId[], Actor arrAct[], Pelicula arrPeli[], int num2, int i, int j)
{
    for (int k=0; k<num2; k++)
    {
        asignarActor(arrId, arrAct, arrPeli, k, i, j);
    }
    return false;
}
// --------------------------------------------------------------------------
bool asignarFuncion(Funcion arrFun[], Pelicula arrPeli[], int i)
{
    int hora, minu, sala;
    string clave;
    cout<<"Asigne los datos para la pelicula "<<arrPeli[i].getNumPeli()<<endl;
    do
    {
        cout<<"Clave: "; cin>>clave;
    } while (clave == "0");
    do
    {
        cout<<"Sala: "; cin>>sala;
    } while (sala <= 0);
    do
    {
        cout<<"Hora: "; cin>>hora;
    } while (hora<0 || hora>=24);
    do
    {
        cout<<"Minutos: "; cin>>minu;
    } while (minu<0 || minu>=60);
    Hora h1;
    h1.setHh(hora);
    h1.setMm(minu);
    arrFun[i].setNumPeli(arrPeli[i].getNumPeli());
    arrFun[i].setCveFuncion(clave);
    arrFun[i].setSala(sala);
    arrFun[i].setHora(h1);
    return true;
}
// --------------------------------------------------------------------------
bool verifCve(Funcion arrFun[], string clave)
{
    for (int i=0; i<20; i++)
    {
        if (clave == arrFun[i].getCveFuncion())
        {
            return false;
        }
    }
    return true;
}
// --------------------------------------------------------------------------
bool veriId(Pelicula arrPeli[], int iidd)
{
    for (int i=0; i<20; i++)
    {
        for (int j=0; j<arrPeli[i].getCantActores(); j++)
        {
            if (iidd == arrPeli[i].getListaActores(j).getId())
            {
                cout<<"•"<<arrPeli[i].getListaActores(j).getNombre()<<endl<<endl;
                return false;
            }
        }
    }
    return true;
}
