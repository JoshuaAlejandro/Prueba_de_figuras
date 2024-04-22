#include "Equilatero.h"
#include "triangulo.h"


Equilatero::Equilatero(float p_Iguales):Triangulo(p_Iguales,p_Iguales,p_Iguales)
{

}
 Equilatero::Equilatero(const Equilatero& other):Triangulo(other){
    p_Iguales=other.p_Iguales;
}
Equilatero::~Equilatero()
{
    //dtor
}


