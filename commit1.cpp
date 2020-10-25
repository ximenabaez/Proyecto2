#include "Actor.h"
#include "Hora.h"
#include "Funcion.h"
#include "Pelicula.h"
#include "funciones.h"
#include <string>
#include <iostream>

#include <fstream>

using namespace std;

int main()
{
// ======================PRUEBAS============================================
    Actor a1(11 ,"Ximena Baez");
    Actor a16;
    Hora h1(1,20);
    Funcion f1("CL8F",4,h1,1);
    Pelicula p1;//(2,"Avatar",2018,125,"CiFi");
    Actor a2(12, "Gael García");
    Actor a3(12, "Pepe Guti");
    Actor a4(13, "José José");
    Actor a5 (20, "Ricky Martin");
    Actor a6 (21, "Ximena Baez");
    Actor a7 (0, "Julian Domi");
    Actor a8 (22, "Jennifer Aniston");
    Actor a9 (23, "Chris Hemsworth");
    Actor a10 (27, "Javier Bardem");
    Actor a11 (30, "Jennifer Lawrence");
    Actor a12 (41, "Brad Pitt");
    Actor a13 (48, "Drake Bell");
    Actor a14 (50, "Julia Roberts");

    a1.muestra();
    a16.setId(90);
    a16.setNombre("Ximo");
    cout<<a16.getId()<<endl;
    cout<<a16.getNombre()<<endl;
    h1.muestra();
    f1.muestra();

    cout<<p1.getNumPeli()<<endl;
    cout<<p1.getTitulo()<<endl;
    cout<<p1.getAnio()<<endl;
    cout<<p1.getDuracion()<<endl;
    cout<<p1.getGenero()<<endl;;

        p1.addListaActores(a1);
    //    cout<<p1.getListaActores(0).getId()<<" ";;
    //    cout<<p1.getListaActores(0).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a2);
    //    cout<<p1.getListaActores(1).getId()<<" ";
    //    cout<<p1.getListaActores(1).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a4);
    //    cout<<p1.getListaActores(2).getId()<<" ";
    //    cout<<p1.getListaActores(2).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a4); //--------------------------------------
    //    cout<<p1.getListaActores(3).getId()<<" ";
    //    cout<<p1.getListaActores(3).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a5);
    //    cout<<p1.getListaActores(3).getId()<<" ";
    //    cout<<p1.getListaActores(3).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a6); //--------------------------------------
    //    cout<<p1.getListaActores(4).getId()<<" ";
    //    cout<<p1.getListaActores(4).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a7); //--------------------------------------
    //    cout<<p1.getListaActores(6).getId()<<" ";
    //    cout<<p1.getListaActores(6).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a3); //--------------------------------------
    //    cout<<p1.getListaActores(4).getId()<<" ";
    //    cout<<p1.getListaActores(4).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a3); //--------------------------------------
    //    cout<<p1.getListaActores(8).getId()<<" ";
    //    cout<<p1.getListaActores(8).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a3); //--------------------------------------
    //    cout<<p1.getListaActores(9).getId()<<" ";
    //    cout<<p1.getListaActores(9).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a3); //--------------------------------------
    //    cout<<p1.getListaActores(10).getId()<<endl;
    //    cout<<p1.getListaActores(10).getNombre()<<endl;
    //    cout<<p1.getCantActores()<<endl<<endl;
        
        p1.addListaActores(a8);
        p1.addListaActores(a9);
        p1.addListaActores(a10);
        p1.addListaActores(a11);
        p1.addListaActores(a12);
        p1.addListaActores(a13);
        p1.addListaActores(a14);
        
        for (int i=0; i<10; i++)
        {
            cout<<p1.getListaActores(i).getId()<<" ";
            cout<<p1.getListaActores(i).getNombre()<<endl;
        }
        //cout<<p1.getListaActores(0).getId()<<endl;
        cout<<p1.getCantActores()<<endl;
        
//=======================================================================
