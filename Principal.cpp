#include "Usuario.h"
#include "DatoBancario.h"
#include "Adaptador.h"
#include "ServicioBancario.h"
#include "UsuarioAdaptador.h"

int main() {
	Usuario* clien = new UsuarioAdaptador();
	cout << (clien->getUsuario(1))->toString();
	system("pause");
	return 0;
}