#ifdef __cplusplus
#ifndef CAPALOGCA_H
#define CAPALOGCA_H
#include "Supervisores.h"
#include "Vendedores.h"
#include "Vendedor.h"
#include "Fecha.h"
#include "Fijo.h"
#include "Zafral.h"
#include "Iterador.h"

class CapaLogica
{
    private:
        Vendedores diccioVendedores;
        Supervisores diccioSupervisores;
    public:
        CapaLogica();
        void nuevoSupervisor(int ,String ,String ,int ,bool &);
        void nuevoVendedorFijo(int ,String ,float ,int ,float ,int ,bool &);
        void nuevoVendedorZafral(int ,String ,float ,int ,float ,Fecha ,int ,bool &);
        Iterador getIteradorSupervisores();
        Iterador getIteradorVendedores();
        Vendedor * getVendedor(int,bool &);
        void regCantVentas(int,int,bool &);
        float  montoPagar();
        int montoZafrales();

};

#endif // CAPALOGCA_H
#endif
