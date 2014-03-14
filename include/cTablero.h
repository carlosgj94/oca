#ifndef CTABLERO_H
#define CTABLERO_H


class cTablero
{
    public:
        cTablero();
        ~cTablero();
        void inicializarCasillas();
        void inicializarJugadores();
        void crearCasillas();

    private:
        //Atributos
        cCasilla *casillas[12];
        cPersonaje *jugadores[4];
        //Metodos
        void casillaOca();
        void casillaPuente();
        void casillaPosoda();
        void casillaPozo();
        void casillaLaberinto();
        void casillaCarcel();
        void casillaDados();
        void casillaMuerte();
        void casillaFinal();

};

#endif // CTABLERO_H


