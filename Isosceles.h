#ifndef ISOSCELES_H_INCLUDED
#define ISOSCELES_H_INCLUDED

#include"triangulo.h"

class Isosceles: public Triangulo{
    public:
        /** Default constructor */
    explicit Isosceles( float p_Iguales=0, float p_Desiguales=0);

    Isosceles(const Isosceles&);
        /** Default destructor */
virtual ~Isosceles();


    protected:

    private:
         float p_Iguales; //!< Member variable "p_Iguales"
         float p_Desiguales; //!< Member variable "p_Desiguales"
};




#endif // ISOSCELES_H_INCLUDED
