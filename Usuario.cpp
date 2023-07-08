#include "Usuario.h"

Usuario::Usuario(int id, string nom, double tDis){
	id = id;
	nombre = nom;
	totalDisponible = tDis;
}

int Usuario::getId() {
	return id;
}

string Usuario::getNombre() {
	return nombre;
}

double Usuario::getTotalDisponible() {
	return totalDisponible;
}

Usuario* Usuario::getUsuario(int) {
	return nullptr;
}

string Usuario::toString() {
	stringstream s;
	s << "-------------------------------------" << endl;
	s << " ----------- DATOS USUARIO ---------" << endl;
	s << " Id: " << id << endl;
	s << " Nombre: " << nombre << endl;
	s << " TotalDisponible: " << totalDisponible << endl;
	s << "-------------------------------------" << endl;
	return s.str();
}
