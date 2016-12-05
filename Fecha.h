#ifdef __cplusplus
#ifndef FECHA_H
#define FECHA_H

class Fecha
{
    private:
        int dd,mm,aa;
    public:
        Fecha();
        Fecha(int , int , int );
        Fecha(const Fecha &) ;
        int getDia() ;
        int getMes() ;
        int getAnio() ;
        void incrementar() ;
        bool operator <(Fecha );
        bool operator ==(Fecha );
        Fecha operator +(int ) ;
        Fecha operator ++() ;
        Fecha operator ++(int);
        int operator -(Fecha );
        bool esValida();
};
#endif

#endif