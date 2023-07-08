#include "ServicioBancario.h"

DatoBancario* ServicioBancario::buscarPorNumeroDeCuenta(int numeroCuenta) {
	if (numeroCuenta == 1) {
		return new DatoBancario(numeroCuenta, "Santiago", 100);
	}
	else if (numeroCuenta == 3) {
		return new DatoBancario(numeroCuenta, "Cristina", 200);
	}
	else {
		return NULL;
	}
}
