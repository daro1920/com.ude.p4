#include <stdio.h>
#include <stdlib.h>
#include "CapaLogica.h"
#include "Menu.h"
#include "CapaLogica.h"

int main() {

    printf ("\n Bienvenido al programa de registro y control de vendedores ");

    int opcion1 ;
    bool termino = false;

    CapaLogica capaLogica();
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 7 && !termino) {
        switch (opcion1) {
            case 1:  // ingresar una partida

                    break;
            case 2:  // finalizar una partida
                    break;
            case 3:  // ingresar todas las partidas
                    break;
            case 4:  // finalizar partida
                    break;
            case 5:  // listar los jugadores por departamento
                    break;
            case 6:  // listar los jugadores por departamento
                    break;
            case 7:  // listar los jugadores por departamento
                    termino = true;
                    break;
            default:
                printf(" La opcion elegida es invalida ");
                break;
        }

        menu.menu1(opcion1);

    }

}
