#include <iostream>
#include "variables.h"
using namespace std;

/* prototipo de funciones*/
void start();
void menu();
void agregarEdad();
void mostrarEdad();

/* Funciones*/
void menu(){
    system("cls || clear");
    cout <<"1. Ingresar edades" <<endl;
    cout <<"2. Mostrar edades" <<endl;
    cout <<"3. Mostrar edad mayor" <<endl;
    cout <<"4. Mostrar edad menor" <<endl;
    cout <<"5. Mostrar promedio de edades"<<endl;
    cout <<"6. Salir" <<endl;

}

/* Agregar Edades*/
void agregarEdad(){
    system("cls || clear");
    cout << "Dime la edad: ";
    cin >> age [pos];
    pos++;
    system("pause");

}
void start(){
int option =0;

    while (option !=6)
    {
        menu();
        cout << "Dime una opcion: ";
        cin >> option;
        switch (option)
        {
            case 1: 
                agregarEdad();
                break;
            case 2:
                mostrarEdad();
                break;
            case 6:
                cout<< "adios" <<endl;
                break;
            default:
                break;
        }
    }
}
        void mostrarEdad()
    {
        system("cls ||clear");
        for (int i= 0; i <pos; i++)
        {
                cout << "Edad: " << age [i] <<endl;

        }
        system("pause");
    }