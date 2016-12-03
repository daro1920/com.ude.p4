#include "Supervisor.h"

Supervisor::Supervisor(int ced,string nomb,string bar,int man):Persona(ced,nomb)
{
    barrio = bar;
    manzana = man;
}

Supervisor::~Supervisor()
{
}

Supervisor::getBarrio()
{
    return barrio;
}

Supervisor::getManzana()
{
    return manzana;
}

Supervisor::listarSupervisor()
{

}

Supervisor::getTipoPersona()
{
        return "Supervisor";
}
