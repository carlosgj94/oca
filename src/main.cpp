#include <iostream>
#include "cTablero.h"
#include "cPersonaje.h"

int main() {
	int numPersonajes;
	cout << "Introduzca el numero de personajes: "<< endl;
	cin >> numPersonajes;
	if(numPersonajes==0){
		cout<<"No se puede jugar con 0 jugadores "<<endl;
	}
	//EMPIEZA EL JUEGO
	else{
		cPersonaje *personajes[numPersonajes];
		string nombre;
		cCasilla casilla;
		int i;
		for (i=0; i<numPersonajes; i++){
			cout << "Introduzca nombre para el personaje "<<i<<" : ";
			cin>>nombre;
			personajes[i]= new cPersonaje(nombre);
			cout<<"Hola jugador "<< personajes[i]->getNombre()<<" eres el numero "<< i<<endl;
		}

		//EMPIEZA LA PARTE DE LA CREACION DEL TABLERO
		cTablero tablero;
		tablero.inicializarCasillas();
		tablero.crearCasillas();

		//LE DAMOS AL BUCLE DEL INFIERNO
		int input = 0;
		int turno=0;
		int posicion;
		do{
			input++;
			cout<< "Turno de "<< personajes[turno]->getNombre() << "!"<<endl;
			cout<<"Presiona intro para tirar dado... "<<endl;
			cin.get();
			personajes[turno]->moverPosicion();
			posicion = personajes[turno]->getPosicion();
			if(posicion>63){
                posicion=63+(63-posicion);
                personajes[turno]->setPosicion(posicion);
			}
			cout<<"Ahoras estas en la posicion: -------------->"<< posicion <<endl;

			//Empieza la busqueda de colisiones con las casillas
			casilla = tablero.buscarPosicion(posicion);
			int cambioPosicion = casilla.getCambiarPosicion();
    		int detener=casilla.getDetenerTurno();
    		bool seguir=casilla.getSeguirTurno();
    		bool ganar=casilla.getGanadora();

    		if(ganar==true){
    			cout<<"El jugador "<< personajes[turno]->getNombre() << " ha ganado, mis congratulaciones."<<endl;
    			cout<<"La partida ha durado: "<<input/numPersonajes<<" turnos"<<endl;
    			input=0;
    		}
    		if(seguir==true){
    			cout<<"Te vuelve a tocar "<<personajes[turno]->getNombre()<<endl;
    			if(turno==0)
                    turno=numPersonajes-1;
                else turno--;
    		}
    		if(detener!=0){
    			personajes[turno]->setTurnosDetenido(detener);
    			cout<<"Estas detenido "<<detener<< " turnos."<<endl;
    		}
    		if(cambioPosicion!=0){
                if(posicion==53)
                    cambioPosicion=-27;
    			personajes[turno]->setPosicion(cambioPosicion);
    			cout<<"Has sido movido a la casilla "<<  personajes[turno]->getPosicion()<<endl;
    		}

    		//Cambio de turno al siguiente jugador

    		if(turno>=numPersonajes-1)
    			turno=0;
    		else turno++;

		}while(input!=0);
	}
	cin.get();
	cout << "Adios!"<<endl;
	return 0;
}
