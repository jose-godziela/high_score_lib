#pragma once
#include <iostream>
#include <fstream>
#define CANT_JUGADORES 5
#define LONG_NOMBRE 256


using namespace std;

class puntaje_jugador {
private:
	int _puntaje;
	string _nombre;
public:
	puntaje_jugador();
	int get_puntaje();
	void set_puntaje(int puntaje);
	string get_nombre();
	void set_nombre(char nombre[LONG_NOMBRE]);
};

void creacion_archivo(puntaje_jugador jugadores[CANT_JUGADORES]);