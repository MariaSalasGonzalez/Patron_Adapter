#pragma once
#include <iostream>
using namespace std;

class DatoBancario{
private:
	int cuenta;
	string nombre;
	double balance;
public:
	DatoBancario(int, string, double);
	string getNombre();
	int getCuenta();
	double getBalance();
};

