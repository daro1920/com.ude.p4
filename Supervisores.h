#ifndef SUPERVISORES_H
#define SUPERVISORES_H

const B = 60;

class Supervisores
{
    private:
//        hSupervisor: Hash
    typedef struct nodoL { Supervisor info;
                           nodoL * sig;
                        } Nodo;
    typedef Nodo * Lista;
    typedef Lista Hash[B];

    public:
        Supervisores();
        boolean member(int);
        void insert(Supervisor);
        Supervisor find(int);
        void modify(int);
        void delete(int);
        iterator listarSupervisores();
        ~Supervisores();

};

#endif // SUPERVISORES_H
