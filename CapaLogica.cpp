#include "CapaLogica.h"

CapaLogica::CapaLogica(): diccioSupervisores(),diccioVendedores(){}

void CapaLogica:: nuevoSupervisor(int ced,String nom,String barr,int man,bool &error) {
    Supervisor * sup = new Supervisor(ced,nom,barr,man);
    //diccioSupervisores Meter al diccionario
    diccioSupervisores.insert(sup);
}
void CapaLogica:: nuevoVendedorFijo(int ced,String nom,float sBase,int cVentas,float pl,int cedSup,bool &error) {
    //Supervisor * sup = diccioSupervisores.find(cedSup);
    Supervisor* sup = new Supervisor(1122,"Barrios","Peñarol",10);
    Vendedor* venFijo = new Fijo(ced,nom,sBase,cVentas,sup,pl);
    diccioVendedores.insert(venFijo);
}
void CapaLogica:: nuevoVendedorZafral(int ced,String nom,float sBase,int cVentas,float com,Fecha fch,int cedSup,bool &error) {
    //Supervisor * sup = diccioSupervisores.find(cedSup);
    Supervisor* sup = new Supervisor(5566,"Lopez","Union",8);
    Vendedor* venZafral = new Zafral(ced,nom,sBase,cVentas,sup,com,fch);
    diccioVendedores.insert(venZafral);
}
Iterador CapaLogica::getIteradorSupervisores(){
return diccioSupervisores.getIteradorSupervisores();
    //return diccioSupervisores.listarSupervisores();
}
Iterador CapaLogica:: getIteradorVendedores(){
    return diccioVendedores.getIteradorVendedores();
}
Vendedor* CapaLogica:: getVendedor(int ced,bool &error) {
    Vendedor * ven;
    if (diccioVendedores.member(ced)) {
        Vendedor * vend = diccioVendedores.find(ced);
    } else {
        error = true;
    }
    return ven;
}
void CapaLogica:: regCantVentas(int ced,int cVentas, bool &error) {
    if (diccioVendedores.member(ced)) {
        Vendedor * vend = diccioVendedores.find(ced);
        vend->setCantVentas(cVentas);
    } else {
        error = true;
    }
}
float CapaLogica:: montoPagar() {

    diccioVendedores.getMontoTotal();
}

int CapaLogica:: montoZafrales() {

    diccioVendedores.getMontoTotal();
}
