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
Iterador iter;
int k=0;

    CapaLogica capaLogica();
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 9 && !termino) {
        switch (opcion1) {
            case 1:  // ingresar un supervisor


                CapaLogica().nuevoSupervisor(123,"primer supervisor","primer barrio",11,error) ;
                CapaLogica().nuevoSupervisor(234,"segundor supervisor","segundo barrio",12,error) ;

                CapaLogica().nuevoSupervisor(345,"tercero supervisor","prtercerobarrio",13,error) ;

                    break;
            case 2:  // ingresar un vendedor
                    break;
            case 3:  // listar supervisores
   printf("veremos que pasa \n");
                           printf("\n nimero %d",k);

//                    Iterador iter;

                    iter = CapaLogica().getIteradorSupervisores();
                    while (iter.hayMasPersonas()){
                        Persona * sup = iter.proximaPersona();
                        sup->listarPersona();
                        k++;
                        printf("\n nimero %d",k);
                    }

    printf("\n no pasa ");
    while(opcion1 != 9 )
    {
             switch (opcion1);
    };
                    break;
            case 4:  // finalizar partida
                    break;
            case 5:  // listar los jugadores por departamento
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
