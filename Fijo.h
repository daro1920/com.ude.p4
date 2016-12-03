#ifndef FIJO_H
#define FIJO_H

#include <Vendedor.h>


class Fijo : public Vendedor
{

    private:
        float plus;
    public:
        Fijo(int,String,float,int,float);
        virtual ~Fijo();
        float getPlus();

};

#endif // FIJO_H
