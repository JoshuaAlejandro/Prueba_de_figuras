#ifndef FIGURA_H
#define FIGURA_H
// los bloques con comentarios son bloques de documentacion

class Figura
{
    public:
        /** Default constructor */
        Figura(unsigned int p_Num=0);
        /** Default destructor */
        virtual ~Figura();
        /** Copy constructor
         *  \param other Object to copy from
         */
        Figura(const Figura& other);
        /** Assignment operator
         *  \param other Object to assign from
         *  \return A reference to this
         */
        Figura& operator=(const Figura& other);

        /** Access m_NumLados
         * \return The current value of m_NumLados
         */
         int GetNumLados() { return m_NumLados; }
        /** Set m_NumLados
         * \param val New value to set
         */
        void SetNumLados(unsigned int val) { m_NumLados = val; }

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
        unsigned int m_NumLados; //!< Member variable "m_NumLados"
};

#endif // FIGURA_H
