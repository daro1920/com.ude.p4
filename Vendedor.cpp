#include "Vendedor.h"
#include <iostream>
using namespace std;

    Vendedor :: Vendedor(int ced,String nombre,float sBase,int cVentas ,Supervisor * sup):
        Persona(ced,nombre){
        sueldosBase = sBase;
        cantVentas = cVentas;
        supervisor = sup;
    }
    float Vendedor:: getSueldoBase() {
        return sueldosBase;
    }
    int Vendedor:: getCantVentas() {
        return cantVentas;
    }

    void Vendedor:: setCantVentas(int cVentas) {
        cantVentas = cVentas;
    }
    Supervisor * Vendedor:: getSupervisor() {
        return supervisor;
    }

    void Vendedor::listarPersonaEspecial() {
        Persona::listarPersonaEspecial();
    }

    void Vendedor::listarPersona() {
        Persona::listarPersona();
        cout << "-sueldo base " << getSueldoBase();
        cout << "-cantidad ventas " << getCantVentas();
        getTipoVendedor().print();
        supervisor->listarPersona();
    }

    String Vendedor:: getTipoPersona(){
        return "Vendedor";
    }

     Vendedor::~Vendedor(){}
