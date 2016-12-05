#include "Menu.h"

Menu::Menu(){}

void Menu:: menu1 (int &opcion1) {

    printf("\n Menu de opciones: \n\n");
    printf("\n 1 - Registrar los datos de un supervisor");
    printf("\n 2 - Dar de alta un vendedor");
    printf("\n 3 - Listar supervisores registrados");
    printf("\n 4 - Listar vendedores registrados");
    printf("\n 5 - Listar datos de un vendedor");
    printf("\n 6 - Registrar cantidad de ventas de la semana de un vendedor");
    printf("\n 7 - Monto de sueldos a pagar de los vendedores");
    printf("\n 8 - Contar total de zafrales");
    printf("\n 9 - Salir del programa \n\n");

    printf(" Ingrese la opcion: ");
    scanf("%d", &opcion1);

}
