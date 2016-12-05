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
         // destruye todo el contenido del árbol
         bool perteneceEnArbol (aVendedor *,int);
         // indica si existe un dueño con la cédula ingresada
         void insertEnArbol (aVendedor * &, Vendedor *);
         // inserta el nuevo dueño en el árbol
         Vendedor * obtenerEnArbol (aVendedor *,int);
         // obtiene el dueño con la cédula ingresada
         void cargarIterador (aVendedor *, Iterador &);
         // carga el iterador recorriendo el árbol en orden
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
