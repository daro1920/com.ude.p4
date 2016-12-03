#include "Supervisores.h"

   private:
        hSupervisor: Hash

    public:
        Supervisores();
        boolean member(int);
        void insert(Supervisor);
        Supervisor find(int);
        void modify(int);
        void delete(int);
        iterator listarSupervisores();
        ~Supervisores();

//crearLista()

boolean PerteneceLista(Lista L, int cedula)
{
    boolean esta = false;
    while (!esta && L != NULL)
    {
        if (cedula == getCedula (L -> info))
            esta = true;
        else
            L = L -> sig;
    }
    return esta;
}

Supervisores::Supervisores(Hash &H)
{
    //  crear diccionario vacio
    for(int i=0;i<B;i++)
        CrearLista(H[i]);

}

boolean member(Hash H, K clave)
{
    int cubeta = h(clave);
    return PerteneceLista (H[cubeta],clave);
}

//Precondición: !member(H,DarClave(e))
void Insertar (Hash &H, Supervisor s)
{
    K clave = DarClave(s);
    int cubeta = h(clave);
    Insfront (H[cubeta],s);
}

//Precondición: !Pertenece(H,DarClave(e))
T Obtener (Hash H, K clave)
{
    int cubeta = h(clave);
    return ObtenerEnLista (H[cubeta],clave);
}
//Precondición: !Pertenece(H,DarClave(e))
void Eliminar (Hash &H, K clave)
{
    int cubeta = h(clave);
    BorrarEnLista (H[cubeta],clave);
}

