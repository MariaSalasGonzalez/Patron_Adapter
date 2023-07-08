#pragma once
#include <iostream>
#include "Usuario.h"
#include "ServicioBancario.h"
using namespace std;

class UsuarioAdaptador : public Usuario{
private:
	ServicioBancario* servicio;
public:
	UsuarioAdaptador();
	Usuario* getUsuario(int numeroCuenta);
};

