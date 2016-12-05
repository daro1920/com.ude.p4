#include "Fijo.h"
#include <iostream>
using namespace std;

Fijo::Fijo(int ced,String nombre,float sBase,int cVentas ,Supervisor * sup,float p):
    Vendedor( ced, nombre, sBase, cVentas , sup) {
    plus = p;
}
float Fijo:: getSueldoBase() {

    float total = 0;

    int cVentas = Vendedor::getCantVentas();
    float suelVend = Vendedor::getSueldoBase();
    if(cVentas<10){
        total = suelVend;
    } else if(cVentas >= 10 && cVentas <=20 ){
        total = suelVend + plus;
    } else {
        total = suelVend + plus*2;
    }
    return total;
}
float Fijo:: getPlus() {
    return plus;
}
void Fijo:: listarPersona() {
    Vendedor::listarPersona();
    cout << "\n plus "<< plus;
}
String Fijo:: getTipoVendedor() {
    return "Fijo";
}

Fijo::~Fijo(){}
