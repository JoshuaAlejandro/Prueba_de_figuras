#include "isosceles.h"
#include "triangulo.h"


Isosceles::Isosceles(float p_Iguales, float p_Desiguales):Triangulo(p_Iguales,p_Desiguales,p_Iguales)
{

}
 Isosceles::Isosceles(const Isosceles& other):Triangulo(other){
    p_Iguales=other.p_Iguales;
    p_Desiguales=other.p_Desiguales;
}
Isosceles::~Isosceles()
{
    //dtor
}
