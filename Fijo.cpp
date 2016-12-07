#include "Fijo.h"
#include <iostream>
using namespace std;

Fijo::Fijo(int ced,String nombre,float sBase,int cVentas ,Supervisor * sup,float p):
    Vendedor( ced, nombre, sBase, cVentas , sup) {
    nplus = p;
}
float Fijo:: getSueldoBase() {

    float total = 0;

    int cVentas = Vendedor::getCantVentas();
    float suelVend = Vendedor::getSueldoBase();
    if(cVentas<10){
        total = suelVend;
    } else if(cVentas >= 10 && cVentas <=20 ){
        total = suelVend + nplus;
    } else {
        total = suelVend + nplus*2;
    }
    return total*1.0;
}
float Fijo:: getPlus() {
    return nplus;
}

void Fijo:: listarPersonaEspecial() {
    Vendedor::listarPersonaEspecial();
    cout << " - Tipo de vendedor Fijo";

}
void Fijo:: listarPersona() {
    Vendedor::listarPersona();
    cout << "\n - plus "<< nplus;

}
String Fijo:: getTipoVendedor() {
    return "Fijo";
}

Fijo::~Fijo(){}
