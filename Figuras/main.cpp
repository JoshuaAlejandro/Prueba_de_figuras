#include <iostream>
#include "triangulo.h"
#include "figura.h"
#include "isosceles.h"
#include "Equilatero.h"

using namespace std;

//manera de crear clases primer menu file-new -class
//segunda clase triangulo

//poner una clase programa
int main()
{

Figura *m_f;
//m_f=new figura(x);
//m_f=new Triangulo(2,2,3);
//m_f=new Isosceles(2,3);
m_f=new Equilatero(6);
//prueba de area y perimetro
cout<<"Ha seleccionado el triangulo"<<endl;
cout<<"el area del triangulo es "<<m_f->Area()<<endl;
cout<<"El perimetro del triangulo es "<<m_f->Perimetro()<<endl;
}
