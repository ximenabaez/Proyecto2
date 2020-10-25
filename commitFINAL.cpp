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
Actor actores[20];
    Funcion funciones[20];
    Pelicula peliculas [20];
    
    ifstream archAct, archPeli;
    
    string nombre;
    int numPeli, anioPeli, duraPeli;
    string genero;
    int cantAct, id;
    string titulo;
    int listaId[10];
    char op = '\0';
    
    archAct.open("actores.txt");
    for (int i=0; i<20; i++)
    {
        archAct>>id;
        getline(archAct,nombre);
        actores[i].setId(id);
        actores[i].setNombre(nombre.erase(0,1));
        //cout<<actores[i].getId()<<" "<<actores[i].getNombre()<<endl;
    }
    archAct.close();

    archPeli.open("peliculas.txt");
    for (int i=0; !archPeli.eof(); i++)
    {
        archPeli>>numPeli>>anioPeli>>duraPeli>>genero>>cantAct;
        if (cantAct == 1)
        {
            archPeli>>listaId[0];
            //cout<<listaId[0]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 1, i, j);
            }
        }
        else if (cantAct == 2)
        {
            archPeli>>listaId[0]>>listaId[1];
            //cout<<listaId[0]<<" "<<listaId[1]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 2, i, j);
            }
        }
        else if (cantAct == 3)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 3, i, j);
            }
        }
        else if (cantAct == 4)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 4, i, j);
            }
        }
        else if (cantAct == 5)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 5, i, j);
            }
        }
        else if (cantAct == 6)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4]>>listaId[5];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 6, i, j);
            }
        }
        else if (cantAct == 7)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4]>>listaId[5]>>listaId[6];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 7, i, j);
            }
        }
        else if (cantAct == 8)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4]>>listaId[5]>>listaId[6]>>listaId[7];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 8, i, j);
            }
        }
        else if (cantAct == 9)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4]>>listaId[5]>>listaId[6]>>listaId[7]>>listaId[8];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 9, i, j);
            }
        }
        else if (cantAct == 10)
        {
            archPeli>>listaId[0]>>listaId[1]>>listaId[2]>>listaId[3]>>listaId[4]>>listaId[5]>>listaId[6]>>listaId[7]>>listaId[8]>>listaId[9];
            //cout<<listaId[0]<<" "<<listaId[1]<<" "<<listaId[2]<<endl;
            for (int j=0;j<20;j++)
            {
                asignarActor2(listaId, actores, peliculas, 10, i, j);
            }
        }
        else
        {
            cout<<"Error"<<endl;
        }
        
        getline(archPeli,titulo); titulo.erase(0,1);
        peliculas[i].setNumPeli(numPeli);
        peliculas[i].setAnio(anioPeli);
        peliculas[i].setDuracion(duraPeli);
        peliculas[i].setGenero(genero);
        peliculas[i].setTitulo(titulo);
    }
    archPeli.close();
    
//    cout<<"----------------------"<<endl;
//    cout<<peliculas[9].getTitulo()<<endl;
//    cout<<peliculas[9].getListaActores(0).getId()<<endl;
//    cout<<peliculas[9].getListaActores(0).getNombre()<<endl;
//    cout<<peliculas[9].getListaActores(1).getId()<<endl;
//    cout<<peliculas[9].getListaActores(1).getNombre()<<endl;
//    cout<<peliculas[9].getListaActores(2).getId()<<endl;
//    cout<<peliculas[9].getListaActores(2).getNombre()<<endl;

    for (int k=0; k<20; k++)
    {
        if (peliculas[k].getNumPeli() == 0)
        {
            break;
        }
        asignarFuncion(funciones, peliculas, k);
        cout<<endl;
    }
    
    while (op != 'G' || op != 'g')
    {
        //cout<<endl;
        cout<<"Seleccione la opción que desee realizar"<<endl;
        cout<<"A. Consultar todos los actores disponibles"<<endl;
        cout<<"B. Consultar todas las peliculas disponibles"<<endl;
        cout<<"C. Consultar todas las funciones disponibles"<<endl;
        cout<<"D. Consultar funciones por hora"<<endl;
        cout<<"E. Consultar funcion por clave"<<endl;
        cout<<"F. Consultar peliculas por actor"<<endl;
        cout<<"G. Salir"<<endl;
        cout<<"Opción: ";
        cin>>op;
        cout<<endl;
        
        if (op == 'A' || op == 'a')
        {
            cout<<"ID"<<" "<<"NOMBRE"<<endl;
            for (int i=0; i<20; i++)
            {
                if (actores[i].getId() == 0)
                {
                    break;
                }
                //cout<<endl;
                actores[i].muestra();
            }
            cout<<endl;
        }
        else if (op == 'B' || op == 'b')
        {
            for (int i=0; i<20; i++)
            {
                if (peliculas[i].getNumPeli() == 0)
                {
                    break;
                }
                cout<<endl;
                cout<<"Título: "<<peliculas[i].getTitulo()<<endl;
                cout<<"Año: "<<peliculas[i].getAnio()<<endl;
                cout<<"Genero: "<<peliculas[i].getGenero()<<endl;
                cout<<"Actores: ";
                for (int j=0; j<peliculas[i].getCantActores(); j++)
                {
                    if (j>0)
                    {
                        cout<<"\t\t"<<" "<<"•"<<peliculas[i].getListaActores(j).getNombre()<<endl;
                    }
                    else
                    {
                        cout<<"•"<<peliculas[i].getListaActores(j).getNombre()<<endl;
                    }
                }
            }
            cout<<endl;
        }
        else if (op == 'C' || op == 'c')
        {
            for (int l=0; l<20. ; l++)
            {
                if (peliculas[l].getNumPeli() == 0)
                {
                    break;
                }
                cout<<"Clave: "<<funciones[l].getCveFuncion()<<endl;
                for (int m=0; m<20; m++)
                {
                    if (funciones[l].getNumPeli() == peliculas[m].getNumPeli())
                    {
                        cout<<"Título: "<<peliculas[m].getTitulo()<<endl;
                    }
                }
                cout<<"Sala: "<<funciones[l].getSala()<<endl;
                funciones[l].getHora().muestra(); cout<<endl;
            }
        }
        else if (op == 'D' || op == 'd')
        {
            int hora, minu;
            cout<<"Digite la hora"<<endl;
            do
            {
                cout<<"Hora: "; cin>>hora;
            } while (hora<0 || hora>=24);
            do
            {
                cout<<"Minutos: "; cin>>minu;
            } while (minu<0 || minu>=60);
            cout<<endl;
            Hora h1;
            h1.setHh(hora);
            h1.setMm(minu);
            for (int n=0; n<20; n++)
            {
                if ((h1.getHh() == funciones[n].getHora().getHh()) && (h1.getMm() == funciones[n].getHora().getMm()))
                {
                    for (int m=0; m<20; m++)
                    {
                        if (funciones[n].getNumPeli() == peliculas[m].getNumPeli())
                        {
                            cout<<"Título: "<<peliculas[m].getTitulo()<<endl;
                            cout<<"Sala: "<<funciones[n].getSala()<<endl<<endl;
                        }
                    }
                }
            }
        }
        else if (op == 'E' || op == 'e')
        {
            string clave;
            do
            {
                cout<<"Digite la clave: "; cin>>clave; cout<<endl;
            } while (clave == "0" || verifCve(funciones, clave));
            for (int j=0; j<20; j++)
            {
                if (clave == funciones[j].getCveFuncion())
                {
                    cout<<"Sala: "<<funciones[j].getSala()<<endl;
                    for (int k=0; k<20; k++)
                    {
                        if (funciones[j].getNumPeli() == peliculas[k].getNumPeli())
                        {
                            cout<<"Título: "<<peliculas[k].getTitulo()<<endl;
                            Hora h1;
                            h1.setHh(funciones[j].getHora().getHh());
                            h1.setMm(funciones[j].getHora().getMm());
                            h1.muestra();
                            cout<<"Duración: "<<peliculas[k].getDuracion()<<endl;
                            cout<<"Genero: "<<peliculas[k].getGenero()<<endl;
                            cout<<"Actores: ";
                            for (int l=0; l<peliculas[k].getCantActores(); l++)
                            {
                                if (l>0)
                                {
                                    cout<<"\t\t"<<" "<<"•"<<peliculas[k].getListaActores(l).getNombre()<<endl;
                                }
                                else
                                {
                                    cout<<"•"<<peliculas[k].getListaActores(l).getNombre()<<endl;
                                }
                            }
                        }
                    }
                }
            }
            cout<<endl;
        }
        else if (op == 'F' || op == 'f')
        {
            int id;
            do
            {
                cout<<"Digite el id: "; cin>>id; cout<<endl;
            } while (id == 0 || veriId(peliculas, id));
            for (int i=0; i<20; i++)
            {
                for (int j=0; j<peliculas[i].getCantActores(); j++)
                {
                    if (id == peliculas[i].getListaActores(j).getId())
                    {
                        cout<<"Título: "<<peliculas[i].getTitulo()<<endl;
                        cout<<"Año: "<<peliculas[i].getAnio()<<endl<<endl;
                    }
                }
            }
        }
        else if (op == 'G' || op == 'g')
        {
            break;
        }
        else
        {
            cout<<"Opción invalida"<<endl<<endl;
        }

    }
    
    return 0;
}
