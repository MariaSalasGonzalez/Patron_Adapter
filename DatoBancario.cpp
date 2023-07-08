#include "DatoBancario.h"

DatoBancario::DatoBancario(int cu, string no, double ba) {
	cuenta = cu;
	nombre = no;
	balance = ba;

}

string DatoBancario::getNombre() {
	return nombre;
}

int DatoBancario::getCuenta() {
	return cuenta;
}

double DatoBancario::getBalance() {
	return balance;
}
