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

			//Empieza la busqueda de colisiones con las casillas
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
    		if(seguir==true){
    			cout<<"Te vuelve a tocar "<<personajes[turno]->getNombre()<<endl;
    			turno--;
    		}
    		if(detener!=0){
    			personajes[turno]->setTurnosDetenido(detener);
    			cout<<"Estas detenido "<<detenido<< " turnos."<<endl;
    		}
    		if(cambioPosicion!=0){
    			personajes[turno]->setPosicion(cambioPosicion);
    			cout<<"Has sido movido a la casilla "<<  personajes[turno]->getPosicion()<<endl;
    		}

    		//Cambio de turno al siguiente jugador
    		turno++;
    		if(turno=>numPersonajes)
    			turno=0;
    		else turno++;

		}while(input!=0);
	}
	return 0;
}