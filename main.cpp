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
    Iterador iterVendedores ;
    Vendedor * vend;

    int cedula;
    int manzana;
    String nombre;
    String barrio;
    float sueldo;
    int cVentas;
    int cedulaSup;
    int plus;

    CapaLogica capaLogica;
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 9 && !termino) {
        switch (opcion1) {
            case 1:  // ingresar un supervisor

                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                printf ("\n Ingrese la nombre: ");
                nombre.scan();
                fflush( stdin );

                printf ("\n Ingrese barrio ");
                barrio.scan();
                fflush( stdin );

                printf ("\n Ingrese la manzana ");
                scanf ("%d", &manzana);
                fflush( stdin );

                capaLogica.nuevoSupervisor(cedula,nombre,barrio,manzana,error) ;

                    break;
            case 2:  // ingresar un vendedor


                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                printf ("\n Ingrese la nombre: ");
                nombre.scan();
                fflush( stdin );

                printf ("\n Ingrese sueldo ");
                scanf ("%d", &sueldo);
                fflush( stdin );

                printf ("\n Ingrese total de ventas ");
                scanf ("%d", &cVentas);
                fflush( stdin );

                printf ("\n Ingrese la cedula del supervisor ");
                scanf ("%d", &cedulaSup);
                fflush( stdin );

                printf ("\n Ingrese el plus ");
                scanf ("%d", &plus);
                fflush( stdin );


                capaLogica.nuevoVendedorFijo(cedula,nombre,sueldo,cVentas,plus,cedulaSup,error) ;
                break;
            case 3:  // listar supervisores
                    iterSupervisores = capaLogica.getIteradorSupervisores();
                    while (iterSupervisores.hayMasPersonas()){
                        Persona * sup = iterSupervisores.proximaPersona();
                        sup->listarPersona();
                    }

                    break;
            case 4:  // listar vendedores
                iterVendedores = capaLogica.getIteradorVendedores();
                while (iterVendedores.hayMasPersonas()){
                    Persona * vend = iterVendedores.proximaPersona();
                    vend->listarPersona();
                }
                break;
            case 5:  // listar vendedor con supervisor
                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                vend = capaLogica.getVendedor(cedula,error);
                if(!error){
                    vend->listarPersona();
                    Supervisor * sup = vend->getSupervisor();
                    sup->listarPersona();

                }else{
                    printf("\nNo existe vendedor");
                }
                    break;
            case 6:  // Registrar cantidad de ventas de la semana de un vendedor
                    printf ("\n Ingrese la cedula: ");
                    scanf ("%d", &cedula);
                    fflush( stdin );

                    printf ("\n Ingrese la cantidad de ventas: ");
                    scanf ("%d", &cVentas);
                    fflush( stdin );

                    capaLogica.regCantVentas(cedula,cVentas,error);
                    break;
            case 7:  // Monto de sueldos a pagar de los vendedores

                    printf ("\n Monto a pagar ",capaLogica.montoPagar());
                    break;
            case 8:  // Contar total de zafrales
                    printf ("\n Cantidad de zafrales ",capaLogica.montoZafrales());
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
