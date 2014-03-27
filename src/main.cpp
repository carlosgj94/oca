#include "cTablero.h"
#include "cPersonaje.h"

int main() {
	int numPersonajes = 0;
	cout << "Introduzca el numero de personajes: "<< endl;
	cin >> numPersonajes;
	if(numPersonajes==0){
		cout<<"No se puede jugar con 0 jugadores"; 
	}
	//EMPIEZA EL JUEGO
	else{
		cPersonaje *personajes[numPersonajes];
		string nombre='';
		cCasilla casilla;
		for (int i=0; i>numPersonajes; i++){
			cout << "Introduzca nombre para el personaje "<<i<<" :"<< endl;
			cin>>nombre;
			personajes[i]= new cPersonaje(nombre);
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
			cout<<"Ahoras estas en la posicion: "<< posicion <<endl;
			casilla = tablero.buscarCasilla(posicion);
			int cambioPosicion = casilla.getCambiarPosicion();
    		int detener=casilla.getDetenerTurno();
    		int seguir=casilla.getSeguirTurno();
    		int ganar=casilla.getGanadora();

    		if(ganar==true){
    			cout<<"El jugador "<< personajes[turno]->getNombre() << " ha ganado, mis congratulaciones."<<endl;
    			cout<<"La partida ha durado: "<<input<<" turnos"<<endl;
    			input=0;
    		}

		}while(input!=0);
	}
	return 0;
}