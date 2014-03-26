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
		int input = 1;
		int turno=0;
		int posicion;
		do{
			cout<< "Turno de "<< personajes[turno]->getNombre(); << "!"<<endl;
			cout<<"Presiona intro para tirar dado... "<<endl;
			cin.get();
			personajes[turno]->moverPosicion();
			posicion = personajes[turno]->getPosicion();
			cout<<"Ahoras estas en la posicion: "<< posicion <<endl;
			


		}while(input!=0);
	}
	return 0;
}