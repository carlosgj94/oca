#include "cCasilla.h"
#ifndef CTABLERO_H
#define CTABLERO_H


class cTablero
{
    public:
        cTablero();
        ~cTablero();
        void inicializarCasillas();//inicializa a NEW las *casillas[10]
        void crearCasillas();// crea cada tipo de casillas
        cCasilla buscarPosicion(int);

    private:
        //Atributos
        cCasilla *casillas[10];
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
        void casillaNormal();

};

#endif // CTABLERO_H


