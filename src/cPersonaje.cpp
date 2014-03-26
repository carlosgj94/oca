#include "cPersonaje.h"

cPersonaje::cPersonaje()
{
    posicion=0;
}

cPersonaje::cPersonaje(string name){
	posicion=0;
	nombre=name;
}

int cPersonaje::getPosicion(){
    return posicion;
}

int cPersonaje::tirarDado(){
    int random= rand()%6;
}
void cPersonaje::moverPosicion{
    int random=this->tirarDado();
    posicion+= ranndom;
}
