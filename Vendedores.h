#ifndef VENDEDORES_H
#define VENDEDORES_H
#include "Vendedor.h"
#include "Iterador.h"

class Vendedores
{
    private:

        struct aVendedor {
             Vendedor * info;
             aVendedor * hizq;
             aVendedor * hder;
         };

         aVendedor * ABB;

         void destruirArbol (aVendedor * &);
         // destruye todo el contenido del �rbol
         bool perteneceEnArbol (aVendedor *,int);
         // indica si existe un due�o con la c�dula ingresada
         void insertEnArbol (aVendedor * &, Vendedor *);
         // inserta el nuevo due�o en el �rbol
         Vendedor * obtenerEnArbol (aVendedor *,int);
         // obtiene el due�o con la c�dula ingresada
         void cargarIterador (aVendedor *, Iterador &);
         // carga el iterador recorriendo el �rbol en orden
         int getMonto(aVendedor *);

    public:
        Vendedores();
        bool member(int);
        void insert(Vendedor *);
        Vendedor * find(int);
        void modify(int);
        int getMontoTotal();
        void getIteradorVendedores(Iterador &);

};

#endif // VENDEDORES_H
