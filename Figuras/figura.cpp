#include "figura.h"
Figura::Figura(unsigned int p_Num)//valor de default queda en .h
{
    //ctor
    m_NumLados=0;
}
Figura::~Figura()
{
    //dtor
}
Figura::Figura(const Figura& other)
{
    //copy ctor
}
Figura& Figura::operator=(const Figura& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

float Figura::Area(){return 0;}

float Figura::Perimetro(){return 0;}
