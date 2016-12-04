#include "Supervisores.h"


int Supervisores::h(int num)
{
    return (num % B);
}

void Supervisores::crearLista(Nodo * &L)
{
    L = NULL;
}

void Supervisores::destruirLista(Nodo * &L)
{
    Nodo * aux = L;
    while (aux != NULL)
    {
        L = aux->sig;
        delete (aux);
        aux = L;
    }
    L = aux;
}

Supervisores::PerteneceLista(Nodo * L, int cedula)
{
    boolean esta = false;
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
    Nodo * aux = new Nodo;
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
        CrearLista(hSupervisores[i]);
}

Supervisores::~Supervisores()
{
    //  crear diccionario vacio
    for(int i=0;i<B;i++)
        destruirLista(hSupervisores[i]);
}

boolean Supervisores::member(int ced)
{
    int cubeta = h(clave);
    return PerteneceLista (hSupervisores[cubeta],ced);
}

//Precondición: !member(H,DarClave(e))
void Supervisores::insert(Supervisor * s)
{
    int ced = s->getCedula();
    int cubeta = h(ced);
    insFrontEnLista(hSupervisores[cubeta],s);
}

//Precondición: !Pertenece(H,DarClave(e))
Supervisor * Supervisores::find(int ced)
{
    int cubeta = h(ced);
    return ObtenerEnLista (hSupervisores[cubeta],ced);
}



