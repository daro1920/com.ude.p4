#include "Iterador.h"
 Iterador :: Iterador () {
     first = NULL;
     last = NULL;
     actual = NULL;

 }
 void Iterador :: insertar (Persona * per) {

     Nodo * ite = new Nodo;
     ite -> info = per;
     ite -> sig = NULL;
     if (prim == NULL) {
         prim = ite;
         ulti = ite;
         actual = ite;
     } else {
         ulti -> sig = ite;
         ulti = ulti -> sig;
     }
 }
 boolean Iterador :: hayMasDuenios () {
    return (boolean) (actual != NULL);
 }
 Persona * Iterador :: proximoDuenio () {
     Persona resu = actual -> info;
     actual = actual -> sig;
     return resu;
 }
