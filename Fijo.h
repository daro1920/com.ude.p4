#ifdef __cplusplus
#ifndef FIJO_H
#define FIJO_H
#include <stdio.h>

#include "Vendedor.h"


class Fijo : public Vendedor
{

    private:
        float nplus;
    public:
        Fijo(int,String,float,int,Supervisor *,float);
        float getSueldoBase();
        float getPlus();
        void listarPersona();
        void listarPersonaEspecial();
        String getTipoVendedor();
        ~Fijo();
};

#endif // FIJO_H

#endif
