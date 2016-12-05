#include "Supervisores.h"


int Supervisores::h(int num)
{
    return (num % B);
}

void Supervisores::crearLista(nodo * &L)
{
    L = NULL;
}

void Supervisores::destruirLista(nodo * &L)
{
    nodo * aux = L;

    while (aux != NULL)
    {
        L = aux->sig;
        delete (aux);
        aux = L;
    }
    L = aux;
}

bool Supervisores::PerteneceLista(nodo * L, int cedula)
{
    bool esta = false;

    while (!esta && L != NULL)
    {
        if (cedula == L -> info->getCedula())
            esta = true;
        else
            L = L -> sig;
    }
    return esta;
}

void Supervisores::insFrontEnLista(nodo * &L,Supervisor * sup)
{
    nodo * aux = new nodo;

    aux->info = sup;
    aux->sig = L;
    L = aux;

}

Supervisor * Supervisores:: obtenerEnLista(nodo * L,int ced)
{
    while (L->info->getCedula() != ced)
        L = L->sig;
    return(L->info);
}
///////////////////////

Supervisores::Supervisores()
{
    //  crear diccionario vacio
    for(int i=0;i<B;i++)
        crearLista(hSupervisores[i]);

}

Supervisores::~Supervisores()
{
    //  crear diccionario vacio
    for(int i=0;i<B;i++)
        destruirLista(hSupervisores[i]);
}

bool Supervisores::member(int ced)
{
    int cubeta = h(ced);
    return PerteneceLista (hSupervisores[cubeta],ced);
}

//Precondici�n: !member(H,DarClave(e))
void Supervisores::insert(Supervisor * s)
{
    int ced = s->getCedula();
    int cubeta = h(ced);

    insFrontEnLista(hSupervisores[cubeta],s);
}

//Precondici�n: !Pertenece(H,DarClave(e))
Supervisor * Supervisores::find(int ced)
{
    int cubeta = h(ced);
    return obtenerEnLista (hSupervisores[cubeta],ced);
}

void Supervisores::cargarIterador ( Iterador &iter) {
    for (int i=0;i<B;i++){
        cargarLista(hSupervisores[i],iter);
    }
}

void Supervisores::getIteradorSupervisores( Iterador &iterSupervisores){
    cargarIterador ( iterSupervisores);
}

void Supervisores::cargarLista(nodo * L,Iterador &iter)
{
    nodo * aux = L;

    while (aux != NULL)
    {
        L = aux->sig;
        iter.insertar (aux->info);
        aux = L;
    }
    L = aux;
}
