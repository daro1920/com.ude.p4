#include <stdio.h>
#include <stdlib.h>
#include "String.h"
#include "CapaLogica.h"
#include "Menu.h"
#include "Fecha.h"
# include "Manejador.h"

int main() {

    printf ("\n Bienvenido al programa de registro y control de vendedores ");

    int opcion1 ;
    bool error;
    bool termino = false;

    Iterador iterSupervisores;
    Iterador iterVendedores ;
    Vendedor * vend;

    int totalSupervisores = 0;
    int tipo;
    int cedula;
    int manzana;
    int dia;
    int mes;
    int anio;
    String nombre;
    String barrio;
    float sueldo;
    int cVentas;
    int cedulaSup;
    int nplus;
    float comision;
    Fecha fecha(10,10,2010);

    CapaLogica capaLogica;
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 9 && !termino) {
        if( (opcion1 >= 1) && (opcion1 <= 9) ){
        switch (opcion1) {
            case 1:  // ingresar un supervisor
                totalSupervisores++ ;
                if (totalSupervisores <= B) {
                    CargarSupervisor(cedula,nombre,barrio,manzana);
                    capaLogica.nuevoSupervisor(cedula,nombre,barrio,manzana,error) ;
                    if (error) {
                        totalSupervisores-- ;
                        printf( "no se ingreso");
                    }
                }
                else{
                    printf( "no se pueden ingresar mas Supervisores");
                }
                break;
            case 2:  // ingresar un vendedor
                printf ("\n Tipo Vendedor 1 - Fijo, 2 - Zafral :");
                scanf ("%d", &tipo);
                fflush( stdin );

                if(tipo == 1){
                    CargarVendFijo(cedula,nombre,sueldo,cVentas,nplus,cedulaSup);
                    capaLogica.nuevoVendedorFijo(cedula,nombre,sueldo,cVentas,nplus,cedulaSup,error) ;
                    if (error) {
                        printf( "no se ingreso");
                    }

                 }else if(tipo == 2){
                    CargarVendZafral(cedula,nombre,sueldo,cVentas,comision,fecha,cedulaSup);
                    capaLogica.nuevoVendedorZafral(cedula,nombre,sueldo,cVentas,comision,fecha,cedulaSup,error) ;
                    if (error) {
                        printf( "no se ingreso");
                    }
                }
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
                    vend->listarPersonaEspecial();
                }
                break;
            case 5:  // listar vendedor con supervisor
                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                vend = capaLogica.getVendedor(cedula,error);
                if(!error){
                    vend->listarPersona();
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

                    printf ("\n Monto a pagar %f",capaLogica.montoPagar());
                    break;
            case 8:  // Contar total de zafrales
                    printf ("\n Cantidad de zafrales %d",capaLogica.montoZafrales());
                    break;
            case 9:  // listar los jugadores por departamento
                    termino = true;
                    break;
            default:
                printf(" La opcion elegida es invalida ");
                break;
        }
        }else{
            printf(" La opcion elegida es invalida ");
        }

        menu.menu1(opcion1);

    }
}

