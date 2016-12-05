#include "Iterador.h"


 Iterador :: Iterador() {
     prim = NULL;
     ulti = NULL;
     actual = NULL;

 }
 void Iterador :: insertar(Persona * per) {

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
 bool Iterador :: hayMasPersonas() {
    return (bool) (actual != NULL);
 }
 Persona * Iterador :: proximaPersona() {
     Persona* resu = actual -> info;
     actual = actual -> sig;
     return resu;
 }
 Iterador :: ~Iterador (){
    Nodo * aux = prim;
    while (aux != NULL){
        prim = prim->sig;
        delete aux;
        aux = prim;
    }
 }
