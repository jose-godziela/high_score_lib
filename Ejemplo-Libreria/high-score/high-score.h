#pragma once
#include <iostream>

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
	void set_nombre(string nombre);
};