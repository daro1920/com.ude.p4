#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include "String.h"
#include "Persona.h"


class Supervisor : public Persona
{
    private:
        String barrio;
        int manzana;
    public:
        Supervisor(int,String,String,int);
        String getBarrio();
        int getManzana();
        String getTipoPersona();
        void listarPersona();

        ~Supervisor();

};

#endif // SUPERVISOR_H
