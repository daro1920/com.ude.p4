#ifdef __cplusplus
#ifndef ZAFRAL_H
#define ZAFRAL_H

#include "Vendedor.h"
#include "Fecha.h"


class Zafral : public Vendedor {

    private:
        float comision;
        Fecha fechaVto;
    public:
        Zafral(int,String,float,int,Supervisor *,float,Fecha);
        float getSueldoBase();
        float getComision();
        Fecha getFecha();
        void listarPersona();
        void listarPersonaEspecial();
        String getTipoVendedor();
        ~Zafral();
};

#endif // ZAFRAL_H

#endif
