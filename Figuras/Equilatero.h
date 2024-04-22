#ifndef EQUILATERO_H_INCLUDED
#define EQUILATERO_H_INCLUDED

#include"triangulo.h"

class Equilatero: public Triangulo{
    public:
        /** Default constructor */
    explicit Equilatero( float p_Iguales=0);

    Equilatero(const Equilatero&);
        /** Default destructor */
virtual ~Equilatero();


    protected:

    private:
         float p_Iguales; //!< Member variable "p_Iguales"

};


#endif // EQUILATERO_H_INCLUDED
