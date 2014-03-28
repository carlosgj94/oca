#include "cPersonaje.h"

cPersonaje::cPersonaje()
{
    posicion=0;
    turnosDetenido=0;
}

cPersonaje::cPersonaje(string name){
	posicion=0;
	nombre=name;
	turnosDetenido=0;
}

int cPersonaje::getPosicion(){
    return posicion;
}
string cPersonaje::getNombre(){
	return nombre;
}
void cPersonaje::setTurnosDetenido(int num){
	turnosDetenido=num;
}

int cPersonaje::tirarDado(){
    int random= rand()%6;
    return random;
}
void cPersonaje::moverPosicion(){
    int random=this->tirarDado();
    cout << "Has sacado un : "<< random<<endl;
    posicion+= random;
}

void cPersonaje::setPosicion(int num){
	posicion+=num;
}
