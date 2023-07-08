#pragma once
#include <iostream>
#include <sstream>
#include "DatoBancario.h"
using namespace std;

class Usuario{
protected:
	int id;
	string nombre;
	double totalDisponible;
public:
	Usuario(int, string, double);
	virtual int getId();
	virtual string getNombre();
	virtual double getTotalDisponible();
	virtual string toString();
	virtual Usuario* getUsuario(int);
};

