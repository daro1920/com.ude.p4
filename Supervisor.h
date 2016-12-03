#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include <Persona.h>


class Supervisor : public Persona
{
    private:
        String barrio;
        int manzana;

    public:
        Supervisor();
        Supervisor(int,string,string,int);
        string getBarrio();
        int getManzana();
        void listarSupervisor();
        void getTipoPersona();
        virtual ~Supervisor();

};

#endif // SUPERVISOR_H
