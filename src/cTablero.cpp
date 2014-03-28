#include "cTablero.h"

cTablero::cTablero()
{
    int i;
    for(i=0; i<10; i++){
        casillas[i]= NULL;
    }
}
void cTablero::inicializarCasillas(){
    int i;
    for(i=0; i<10; i++){
        casillas[i]= new cCasilla;
    }
}

void cTablero::crearCasillas(){
    casillaOca();
    casillaPuente();
    casillaPosoda();
    casillaPozo();
    casillaLaberinto();
    casillaCarcel();
    casillaDados();
    casillaMuerte();
    casillaFinal();
    casillaNormal();
}

void cTablero::casillaNormal(){
    int posiciones[42]={1, 2, 3, 4, 7, 8, 9, 10, 11, 13 , 15, 16, 17, 20, 21, 22, 24, 25, 28, 29 , 30, 33, 34, 35, 37, 38, 39, 40, 43, 44 , 46, 47, 48, 49, 51, 55, 56, 57, 58, 60, 61, 62};
    casillas[0]=new cCasilla(0, 0, false, false, posiciones);
}

void cTablero::casillaOca(){//No siempre cambia 5 posiciones, afinar mas tarde!!!!!!!!!!!
    int posiciones[13] = {5, 9, 14, 18, 23, 27, 32, 36, 41, 45, 50, 54, 59};
    casillas[1] = new cCasilla(5, 0, true, false, posiciones);
}
void cTablero::casillaPuente(){//Tambien puede mover negativo CAMBIAR!!!!

    int posiciones[2]= {6, 12};
    casillas[2]= new cCasilla(6, 0, true, false, posiciones);
}

void cTablero::casillaPosoda(){
    int posiciones[1]= {19};
    casillas[3]= new cCasilla(0, 1, false, false, posiciones);
}

void cTablero::casillaPozo(){
    int posiciones[1]= {31};
    casillas[4]=new cCasilla(0, 10, false, false, posiciones);
}

void cTablero::casillaLaberinto(){//NO retrocede 30, sino que te lleva a la treinta
    int posiciones[1]={42};
    casillas[5]= new cCasilla(-30, 0, false, false, posiciones);
}

void cTablero::casillaCarcel(){
    int posiciones[1] = {52};
    casillas[6]=  new cCasilla(0, 3, false, false, posiciones);
}

void cTablero::casillaDados(){//DE DADO A DADO Y TIRO PORQUE ME HA TOCADO, NO SOLO AVANZAS X
    int posiciones[2]={26, 53};
    casillas[7]= new cCasilla(26, 0, true, false, posiciones);
}

void cTablero::casillaMuerte(){
    int posiciones[2]={58};
    casillas[8]= new cCasilla(-58, 0, false, false, posiciones);
}

void cTablero::casillaFinal(){
    int posiciones[1]={63};
    casillas[9] = new cCasilla(0, 0, false, true, posiciones);
}

cCasilla cTablero::buscarPosicion(int posicionActual){
    int encontrado=0;
    int i=0;
    do{
        if(posicionActual==casillas[i]->getPosiciones()){
            encontrado=1;
            i--;
        }
        i++;
    } while (encontrado!=0 && i<10);
    int cambioPosicion = casillas[i]->getCambiarPosicion();
    int detener=casillas[i]->getDetenerTurno();
    int seguir=casillas[i]->getSeguirTurno();
    int ganar=casillas[i]->getGanadora();
    int posiciones[1]= {posicionActual};
    cCasilla casillaActual(cambioPosicion, detener, seguir, ganar, posiciones);
    return casillaActual;
}
