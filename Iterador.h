#ifndef _Iterador_H
#define _Iterador_H
#include "Persona.h"
class Iterador
{
    private:
        struct Nodo { Persona * info;
            Nodo * sig;
        };
        Nodo * prim;
        Nodo * ulti;
        Nodo * actual;
    public:
        Iterador ();
        // constructor por defecto
        void insertar (Persona *);
        // inserta una persona en el iterador
        boolean hayMasDuenios ();
        // determina si quedan personas por visitar en el iterador
        Persona * proximoDuenio ();
        // retorna la proxima persona por visitar en el iterador
        ~Iterador ();
        // destructor
};
#endif
