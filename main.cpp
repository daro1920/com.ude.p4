#include <stdio.h>
#include <stdlib.h>
#include "String.h"
#include "CapaLogica.h"
#include "Menu.h"
#include "Fecha.h"

int main() {

    printf ("\n Bienvenido al programa de registro y control de vendedores ");

    int opcion1 ;
    bool error;
    bool termino = false;

    Iterador iterSupervisores;
    Iterador iterVendedores ;
    Vendedor * vend;

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
    int plus;
    float comision;

    CapaLogica capaLogica;
    Menu menu;
    menu.menu1(opcion1);
    while(opcion1 != 9 && !termino) {
        if( (opcion1 >= 1) && (opcion1 <= 9) ){
        switch (opcion1) {
            case 1:  // ingresar un supervisor
                /*
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
                */
                capaLogica.nuevoSupervisor(111,"Sup1","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(222,"Sup2","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(333,"Sup3","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(444,"Sup4","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(555,"Sup5","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(666,"Sup6","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(777,"Sup7","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(888,"Sup8","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(999,"Sup9","Barrio",11,error) ;
                capaLogica.nuevoSupervisor(101010,"Sup10","Barrio",11,error) ;


                    break;
            case 2:  // ingresar un vendedor

                printf ("\n Tipo Vendedor 1 - Fijo, 2 - Zafral :");
                scanf ("%d", &tipo);
                fflush( stdin );

                if(tipo == 1){
/*
                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                printf ("\n Ingrese la nombre: ");
                nombre.scan();
                fflush( stdin );

                printf ("\n Ingrese sueldo ");
                scanf ("%f", &sueldo);
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
                */

                capaLogica.nuevoVendedorFijo(1111,"Fijo1",100,10,10,111,error) ;
                capaLogica.nuevoVendedorFijo(2222,"Fijo2",100,10,10,222,error) ;
                capaLogica.nuevoVendedorFijo(3333,"Fijo3",100,10,10,333,error) ;
                capaLogica.nuevoVendedorFijo(4444,"Fijo4",100,10,10,444,error) ;

                }else if(tipo == 2){


                /*
                printf ("\n Ingrese la cedula: ");
                scanf ("%d", &cedula);
                fflush( stdin );

                printf ("\n Ingrese la nombre: ");
                nombre.scan();
                fflush( stdin );

                printf ("\n Ingrese sueldo ");
                scanf ("%f", &sueldo);
                fflush( stdin );

                printf ("\n Ingrese total de ventas ");
                scanf ("%d", &cVentas);
                fflush( stdin );

                printf ("\n Ingrese la cedula del supervisor ");
                scanf ("%d", &cedulaSup);
                fflush( stdin );

                printf ("\n Ingrese la comision ");
                scanf ("%f", &comision);
                fflush( stdin );

                printf ("\n Ingrese la fecha de vencimiento ");
                printf ("\n Dia ");
                scanf ("%d", &dia);
                fflush( stdin );
                printf ("\n Mes ");
                scanf ("%d", &mes);
                fflush( stdin );
                printf ("\n Anio ");
                scanf ("%d", &anio);
                fflush( stdin );
                Fecha fecha(dia,mes,anio);

                capaLogica.nuevoVendedorZafral(cedula,nombre,sueldo,cVentas,comision,fecha,cedulaSup,error) ;
                */
                Fecha fecha(10,10,2010);
                capaLogica.nuevoVendedorZafral(11111,"Zafral1",200,20,1.5,fecha,111,error) ;
                capaLogica.nuevoVendedorZafral(22222,"Zafral2",200,20,1.5,fecha,222,error) ;
                capaLogica.nuevoVendedorZafral(33333,"Zafral1",200,20,1.5,fecha,333,error) ;
                capaLogica.nuevoVendedorZafral(44444,"Zafral1",200,20,1.5,fecha,444,error) ;
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
