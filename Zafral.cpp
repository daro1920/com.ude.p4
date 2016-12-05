#include "Zafral.h"
#include <iostream>
using namespace std;

Zafral:: Zafral(int ced,String nombre,float sBase,int cVentas ,Supervisor * sup,float com,Fecha fecha):
    Vendedor(ced,nombre,sBase,cVentas,sup),fechaVto(fecha) {
    comision = com;
}

float Zafral:: getSueldoBase(){
    float sulVend = Vendedor::getSueldoBase();
    int cVentas = Vendedor::getCantVentas();
    return (comision*cVentas) + sulVend;
}
float Zafral:: getComision() {
    return comision;
}
Fecha Zafral:: getFecha() {
    return fechaVto;
}

void Zafral:: listarPersona() {
    Vendedor::listarPersona();
    int dia = fechaVto.getDia();
    int mes = fechaVto.getMes();
    int anio = fechaVto.getAnio();
    cout << "\n Fecha "<< dia << "'\'" << mes<< "'\'" <<anio;


}
String Zafral:: getTipoVendedor() {
    return "Zafral";
}

Zafral::~Zafral(){}
