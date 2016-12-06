#include <stdio.h>
#include <stdlib.h>

# include "Manejador.h"
ç

//Punto 1. ingresar jugadores
void CargarSupervisor(int &cedula,String &nombre,String &barrio, int &manzana)
{
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

}

void CargarVendFijo(int &cedula,String &nombre,float &sueldo, int &cVentas, int &nplus,int &cedulaSup)
{
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
                scanf ("%d", &nplus);
                fflush( stdin );

}

void CargarVendZafral(int &cedula,String &nombre,float &sueldo, int &cVentas, float &comision,Fecha fecha,int &cedulaSup)
{
    int dia1;
    int mes1;
    int anio1;
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
    scanf ("%d", &dia1);
    fflush( stdin );
    printf ("\n Mes ");
    scanf ("%d", &mes1);
    fflush( stdin );
    printf ("\n Anio ");
    scanf ("%d", &anio1);
    fflush( stdin );

    Fecha(dia1,mes1,anio1);
}

