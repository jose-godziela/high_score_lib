#include "high-score.h"
#define NULL 0
#define NOMBRE_NULL '\0'


puntaje_jugador::puntaje_jugador() {
	_puntaje = NULL;
	_nombre = NOMBRE_NULL;
}

void puntaje_jugador::set_puntaje(int puntaje) { _puntaje = puntaje; }

int puntaje_jugador::get_puntaje() { return _puntaje; }

void puntaje_jugador::set_nombre(string nombre) { _nombre = nombre; }

string puntaje_jugador::get_nombre() { return _nombre; }





