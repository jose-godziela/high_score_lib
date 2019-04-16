#include "high-score.h"

using namespace std;

void creacion_lista();

void main() {
	creacion_lista();


	system("pause");
}

void creacion_lista() {
	
	char nombre[LONG_NOMBRE];
	int puntaje[CANT_JUGADORES];
	puntaje_jugador* jugadores[CANT_JUGADORES];
	puntaje_jugador* aux[CANT_JUGADORES];

	for (int i = 0; i < CANT_JUGADORES; i++) {
		jugadores[i] = new puntaje_jugador();
		aux[i] = new puntaje_jugador();
	}
	cout << "Ingrese los nombres de los jugadores" << endl;
	cout << " y luego su puntaje" << endl;

	for (int i = 0; i < CANT_JUGADORES; i++) {
		cout << "Ingrese el nombre del jugador " << i + 1 << " : ";
		cin.getline(nombre, LONG_NOMBRE);
		jugadores[i]->set_nombre(nombre);

	}
	/*
	char nombre[LONG_NOMBRE] = "";
	cout << "Ingrese el nombre del jugador " << i + 1 " 5 " << " : ";
	cin.getline(nombre,LONG_NOMBRE);
	cout << nombre << endl;*/
}

