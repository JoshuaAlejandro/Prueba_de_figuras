#include "Cuadrilatero.h"

Cuadrilatero::Cuadrilatero( float p_Lado1, float p_Lado2, float p_Lado3, float p_Lado4):Figura(4){
    //ctor
    m_Lado1=p_Lado1;
    m_Lado2=p_Lado2;
    m_Lado3=p_Lado3;
    m_Lado4=p_Lado4;
}
 Cuadrilatero::Cuadrilatero(const Cuadrilatero& other):Figura(other){
    m_Lado1=other.m_Lado1;
    m_Lado2=other.m_Lado2;
    m_Lado3=other.m_Lado3;
}
Cuadrilatero::~Cuadrilatero()
{
    //dtor
}

float Cuadrilatero::Area(){
return (m_Lado1)*(m_Lado2);
}

float Cuadrilatero::Perimetro(){
return m_Lado1+m_Lado2+m_Lado3+m_Lado4;
}


