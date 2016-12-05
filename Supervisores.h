#ifndef SUPERVISORES_H
#define SUPERVISORES_H
#include "Supervisor.h"
#include "Iterador.h"

const int B = 60;

class Supervisores
{
    private:
//        hSupervisor: Hash
        struct nodo{
                    Supervisor * info;
                    nodo * sig;
                    } ;
        nodo * hSupervisores[B];

        int h (int);
        void crearLista(nodo * &);
        void destruirLista(nodo * &);
        bool PerteneceLista(nodo *, int);
        void insFrontEnLista(nodo * &, Supervisor *);

        Supervisor * obtenerEnLista(nodo *,int);

    public:
        Supervisores();
        bool member(int);
        void insert(Supervisor *);
        Supervisor * find(int);
        Iterador listarSupervisores();

        ~Supervisores();

};

#endif // SUPERVISORES_H
