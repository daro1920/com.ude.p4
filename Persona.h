#ifdef __cplusplus

#ifndef PERSONA_H
#define PERSONA_H
#include "String.h"
#include <stdio.h>

class Persona
{
    private:
        int cedula;
        String nombre;
    public:
        Persona(int,String);
        int getCedula();
        String getNombre();
        virtual void listarPersona();
        virtual String getTipoPersona() =0;
        virtual ~Persona();

};

#endif // PERSONA_H

#endif
