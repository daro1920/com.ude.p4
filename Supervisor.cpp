#include "Supervisor.h"

Supervisor::Supervisor(int ced,String nom,String barr,int man):Persona(ced,nom) {
    barrio = barr;
    manzana = man;
}
String Supervisor:: getTipoPersona(){
    return "Supervisor";
}

void Supervisor:: listarPersona() {

}
Supervisor::~Supervisor()
{
    //dtor
}
