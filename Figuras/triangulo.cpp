#include "triangulo.h"

Triangulo::Triangulo( float p_Lado1, float p_Lado2, float p_Lado3):Figura(3){
    //ctor
    m_Lado1=p_Lado1;
    m_Lado2=p_Lado2;
    m_Lado3=p_Lado3;
}
 Triangulo::Triangulo(const Triangulo& other):Figura(other){
    m_Lado1=other.m_Lado1;
    m_Lado2=other.m_Lado2;
    m_Lado3=other.m_Lado3;
}
Triangulo::~Triangulo()
{
    //dtor
}

float Triangulo::Area(){
return (m_Lado1)*(m_Lado2)/2;
}

float Triangulo::Perimetro(){
return m_Lado1+m_Lado2+m_Lado3;
}

