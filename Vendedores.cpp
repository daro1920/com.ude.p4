#include "Vendedores.h"

void Vendedores :: destruirArbol (aVendedor * &a) {
    if (a != NULL) {
        destruirArbol(a->hizq);
        destruirArbol(a->hder);
        delete (a->info);
        delete (a);
        a = NULL;
    }
}

bool Vendedores :: perteneceEnArbol (aVendedor * a,int ced) {

    if(a == NULL){
        return false;
    } else if(a->info->getCedula() == ced){
        return true;
    } else if(ced < a->info->getCedula()){
        return perteneceEnArbol(a->hizq, ced);
    } else {
        return perteneceEnArbol(a->hder, ced);
    }
}

void Vendedores :: insertEnArbol (aVendedor * &a, Vendedor * vend) {
    if (a == NULL) {
        a = new aVendedor;
        a -> info = vend;
        a -> hizq = NULL;
        a -> hder = NULL;
    } else if (vend->getCedula() < a->info->getCedula()) {
        insertEnArbol(a->hizq,vend);
    } else {
        insertEnArbol(a->hder,vend);
    }
}
Vendedor * Vendedores :: obtenerEnArbol (aVendedor * a,int ced) {

    if(a->info->getCedula() == ced){
        return a->info;
    } else if(ced < a->info->getCedula()) {
        return obtenerEnArbol(a->hizq, ced);
    } else {
        return obtenerEnArbol(a->hder, ced);
    }
}
void Vendedores :: cargarIterador (aVendedor * a, Iterador &iter) {
    if (a != NULL) {
        cargarIterador (a->hizq, iter);
        iter.insertar (a->info);
        cargarIterador (a->hder, iter);
    }
}
int Vendedores :: getMonto(aVendedor * a){

    return 10;
}



Vendedores::Vendedores() {
    ABB = NULL;
}

bool Vendedores:: member(int ced) {
    return perteneceEnArbol (ABB, ced);
}

void Vendedores:: insert(Vendedor * vend) {
    insertEnArbol (ABB, vend);
}
Vendedor * Vendedores:: find(int ced) {
    return obtenerEnArbol (ABB, ced);
}
int Vendedores:: getMontoTotal() {

    return getMonto(ABB);
}


void Vendedores:: getIteradorVendedores( Iterador &iterVendedores) {
    cargarIterador (ABB, iterVendedores);
}



