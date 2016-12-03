#include "Iterador.h"
 Iterador :: Iterador () {
     prim = NULL;
     ulti = NULL;
     actual = NULL;

 }
 void Iterador :: insertar (Persona * per) {

     Nodo * nuevo = new Nodo;
     nuevo -> info = per;
     nuevo -> sig = NULL;
     if (prim == NULL) {
         prim = nuevo;
         ulti = nuevo;
         actual = nuevo;
     } else {
         ulti -> sig = nuevo;
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
