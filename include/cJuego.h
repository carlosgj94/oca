#ifndef CJUEGO_H
#define CJUEGO_H


class cJuego
{
    public:
        cJuego();
        ~cJuego();
        void inicializarPersonajes();
        void inicializarJuego();

    private:
        cTablero tablero;
        cPersonaje *personajes[4];

};

#endif // CJUEGO_H
