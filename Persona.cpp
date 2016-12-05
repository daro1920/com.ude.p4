#include "Persona.h"
#include <iostream>
using namespace std;


Persona:: Persona(int ced,String nom):nombre(nom){
    cedula= ced;
}
int Persona::getCedula() {
    return cedula;
}
String Persona::getNombre() {
    return nombre;
}
void Persona::listarPersona() {
    cout << "\n Cedula" << cedula ;
    cout << " - ";
    cout << "Nombre " ; nombre.print() ;
}
Persona:: ~Persona(){}
