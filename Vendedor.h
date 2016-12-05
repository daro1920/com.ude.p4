#ifdef __cplusplus
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Persona.h"
#include "Supervisor.h"


class Vendedor : public Persona
{
    private:
        float sueldosBase;
        int cantVentas;
        Supervisor * supervisor;
    public:
        Vendedor(int,String,float,int,Supervisor *);
        float getSueldoBase();
        int getCantVentas();
        void setCantVentas(int);
        Supervisor* getSupervisor();
        virtual void listarPersona();
        String getTipoPersona();
        virtual String getTipoVendedor() =0;
        virtual ~Vendedor();
};

#endif // VENDEDOR_H

#endif