#include <stdio.h>
#include <stdlib.h>
 #include "String.h"
#include "CapaLogica.h"
#include "Menu.h"
#include "CapaLogica.h"

int main() {

    printf ("\n Bienvenido al programa de registro y control de vendedores ");
    
    int opcion1 ;
    bool termino = false;

                int cedo = 123456;
                string nomo = "primer supervisor";
                string baro = "la blanqueada";
                int mano = 7;
                bool error;
int k=0;

    Iterador iterSupervisores;
    Iterador iterVendedores;
    Vendedor * vend;

    CapaLogica capaLogica;
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 9 && !termino) {
        switch (opcion1) {
            case 1:  // ingresar un supervisor
                capaLogica.nuevoSupervisor(1122,"Barrios","PeÒarol",10,error) ;
                capaLogica.nuevoSupervisor(5566,"Lopez","Union",8,error) ;

                    break;
            case 2:  // ingresar un vendedor
                capaLogica.nuevoVendedorFijo(3111,"Vendedor1",2000,40,1.5,1122,error) ;
                capaLogica.nuevoVendedorZafral(4111,"Vendedor2",3500,25,10,Fecha(),5566,error) ;
                    break;
            case 3:  // listar supervisores
                    capaLogica.getIteradorSupervisores(iterSupervisores);
                    while (iterSupervisores.hayMasPersonas()){
                        Persona * sup = iterSupervisores.proximaPersona();
                        sup->listarPersona();
                    }

                    break;
            case 4:  // listar vendedores
                capaLogica.getIteradorVendedores(iterVendedores);
                while (iterVendedores.hayMasPersonas()){
                    Persona * vend = iterVendedores.proximaPersona();
                    vend->listarPersona();
                }
                    break;
            case 5:  // listar vendedor con supervisor
                vend = capaLogica.getVendedor(3111,error);
                if(!error){
                    vend->listarPersona();
                    Supervisor * sup = vend->getSupervisor();
                    sup->listarPersona();
                    
                }else{
                    printf("\nNo existe vendedor");
                }
                    break;
            case 6:  // listar los jugadores por departamento
                    break;
            case 7:  // listar los jugadores por departamento
                    break;
            case 8:  // listar los jugadores por departamento
                    break;
            case 9:  // listar los jugadores por departamento
                    termino = true;
                    break;
            default:
                printf(" La opcion elegida es invalida ");
                break;
        }

        menu.menu1(opcion1);

    }

}
