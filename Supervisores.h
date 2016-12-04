#ifndef SUPERVISORES_H
#define SUPERVISORES_H

const B = 60;

class Supervisores
{
    private:
//        hSupervisor: Hash
        struct nodo{ Supervisor * info;
                    nodoL * sig;
                    } ;
        Nodo * hSupervisores[B];

        int h (int);
        void crearLista(Nodo * &);
        void destruirLista(Nodo * &);
        boolean PerteneceLista(Nodo *, int);
        void insFrontEnLista(Nodo * &, Supervisor *);
        Supervisor * obtenerEnLista(nodo *,int);

    public:
        Supervisores();
        boolean member(int);
        void insert(Supervisor *);
        Supervisor * find(int);
        iterator listarSupervisores();
        ~Supervisores();

};

#endif // SUPERVISORES_H
