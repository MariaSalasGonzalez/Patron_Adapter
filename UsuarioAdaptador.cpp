#include "UsuarioAdaptador.h"

UsuarioAdaptador::UsuarioAdaptador(): Usuario(id, nombre, totalDisponible){
	servicio = new ServicioBancario();
}

Usuario* UsuarioAdaptador::getUsuario(int numeroCuenta) {
	DatoBancario* datoBancario = servicio->buscarPorNumeroDeCuenta(numeroCuenta);
	Usuario* usu = new Usuario(datoBancario->getCuenta(), datoBancario->getNombre(), datoBancario->getBalance());
	return usu;
}
