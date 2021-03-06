#include "Supervisor.h"
#include <iostream>
using namespace std;

Supervisor::Supervisor(int ced,String nom,String barr,int man):Persona(ced,nom) {
    barrio = barr;
    manzana = man;
}

String Supervisor:: getTipoPersona(){
    return "Supervisor";
}

void Supervisor:: listarPersona() {
        Persona::listarPersona();
        cout << " - Barrio " ; barrio.print();
        cout << " - Cantidad de manzanas " << manzana;
}

Supervisor::~Supervisor(){}

String Supervisor::getBarrio() {
    return barrio;
}

int Supervisor::getManzana() {
    return manzana;
}

