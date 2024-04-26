#ifndef CUADRILATERO_H_INCLUDED
#define CUADRILATERO_H_INCLUDED

#include "figura.h"


class Cuadrilatero : public Figura
{
    public:
        /** Default constructor */
        Cuadrilatero( float p_Lado1=0, float p_Lado2=0, float p_Lado3=0,float p_Lado4=0);
        /** Default destructor */
        virtual ~Cuadrilatero();

        Cuadrilatero(const Cuadrilatero& other);

        /** Access m_Lado1
         * \return The current value of m_Lado1
         */
         float GetLado1() { return m_Lado1; }
        /** Set m_Lado1
         * \param val New value to set
         */
        void SetLado1( float val) { m_Lado1 = val; }
        /** Access m_Lado2
         * \return The current value of m_Lado2
         */
         float GetLado2() { return m_Lado2; }
        /** Set m_Lado2
         * \param val New value to set
         */
        void SetLado2( float val) { m_Lado2 = val; }
        /** Access m_Lado3
         * \return The current value of m_Lado3
         */
         float GetLado3() { return m_Lado3; }
        /** Set m_Lado3
         * \param val New value to set
         */
        void SetLado3( float val) { m_Lado3 = val; }

        /** Access m_Lado4
         * \return The current value of m_Lado4
         */
         float GetLado4() { return m_Lado4; }
        /** Set m_Lado4
         * \param val New value to set
         */
        void SetLado4( float val) { m_Lado4 = val; }

        /** \brief
         *
         * \return float
         *
         */
virtual float Area();

        /** \brief
         *
         * \return float
         *
         */
virtual float Perimetro();

    protected:

    private:
         float m_Lado1; //!< Member variable "m_Lado1"
         float m_Lado2; //!< Member variable "m_Lado2"
         float m_Lado3; //!< Member variable "m_Lado3"
         float m_Lado4; //!< Member variable "m_Lado4"
};



#endif // CUADRILATERO_H_INCLUDED
