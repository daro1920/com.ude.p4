#ifndef MANEJADOR_H_INCLUDED
#define MANEJADOR_H_INCLUDED

# include "String.h"
# include "Fecha.h"


//Punto 1. ingresar
void CargarSupervisor(int &cedula,String &nombre,String &barrio, int &manzana);

void CargarVendFijo(int &cedula,String &nombre,float &sueldo, int &cVentas, int &nplus,int &cedulaSup);

void CargarVendZafral(int &,String &,float &, int &, float &,Fecha ,int &);
#endif // MANEJADOR_H_INCLUDED
