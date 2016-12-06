#include "CapaLogica.h"

CapaLogica::CapaLogica(): diccioSupervisores(),diccioVendedores(){}

void CapaLogica:: nuevoSupervisor(int ced,String nom,String barr,int man,bool &error) {
    error = false;
    if (!diccioSupervisores.member(ced))
    {
        if (!diccioVendedores.member(ced))
        {
            Supervisor * sup = new Supervisor(ced,nom,barr,man);
            //diccioSupervisores Meter al diccionario
            diccioSupervisores.insert(sup);
        }
    }
    else {
        error = true;
    }
}
void CapaLogica:: nuevoVendedorFijo(int ced,String nom,float sBase,int cVentas,float pl,int cedSup,bool &error) {
    error = false;
    if (!diccioSupervisores.member(ced))
    {
        if (!diccioVendedores.member(ced))
        {
            if (diccioSupervisores.member(cedSup)){
                Supervisor * sup = diccioSupervisores.find(cedSup);
                Vendedor* venFijo = new Fijo(ced,nom,sBase,cVentas,sup,pl);
                diccioVendedores.insert(venFijo);
            }
            else {
                error = true;
            }
        }
        else {
            error = true;
        }
    }
    else {
        error = true;
    }
}

void CapaLogica:: nuevoVendedorZafral(int ced,String nom,float sBase,int cVentas,float com,Fecha fch,int cedSup,bool &error) {
    error = false;
    if (!diccioSupervisores.member(ced))
    {
        if (!diccioVendedores.member(ced))
        {
            if (diccioSupervisores.member(cedSup)){
                Supervisor * sup = diccioSupervisores.find(cedSup);
                Vendedor* venZafral = new Zafral(ced,nom,sBase,cVentas,sup,com,fch);
                diccioVendedores.insert(venZafral);
               }
            else {
                error = true;
            }
        }
        else {
            error = true;
        }
    }
    else {
        error = true;
    }
}
Iterador CapaLogica::getIteradorSupervisores(){
    return diccioSupervisores.getIteradorSupervisores();
}
Iterador CapaLogica:: getIteradorVendedores( ){
    return diccioVendedores.getIteradorVendedores();
}
Vendedor * CapaLogica:: getVendedor(int ced,bool &error) {
    Vendedor * ven;
    if (diccioVendedores.member(ced)) {
        ven = diccioVendedores.find(ced);
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

    return (diccioVendedores.getMontoTotal());
}

int CapaLogica:: montoZafrales() {

    return(diccioVendedores.getCantidadZafrales());
}
