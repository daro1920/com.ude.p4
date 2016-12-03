#ifndef CAPALOGCA_H
#define CAPALOGCA_H


class CapaLogica
{
    private:
        Vendedores diccioVendedores;
        Supervisores diccioSupervisores;
    public:
        CapaLogica();
        void nuevoSupervisor(int,String,String,int);
        void nuevoVendedorFijo(int,String,float,int,float);
        void nuevoVendedorZafral(int,String,float,int,float,Fecha);
        void listarSupervisores();
        void listarVendedores();
        void listarVendedor(int);
        void montoPagar(float &);
        void montoZafrales(int &);

};

#endif // CAPALOGCA_H
