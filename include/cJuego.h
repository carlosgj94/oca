#ifndef CJUEGO_H
#define CJUEGO_H


class cJuego
{
    public:
        cJuego();
        ~cJuego();
        //void inicializarPersonajes(); LO QUITO XK CREO QUE ES MEJOR HACERLO A PELO
        //void inicializarJuego(); LO QUITO XK CREO QUE ES MEJOR HACERLO A PELO


    private:
        cTablero tablero;
        cPersonaje *personajes[4];
        cPersonaje *turno;

};

#endif // CJUEGO_H
