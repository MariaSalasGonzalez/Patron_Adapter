#pragma once
#include <iostream>
#include "DatoBancario.h"
using namespace std;

class DatoBancario;
class ServicioBancario;

class ServicioBancario{
public:
	DatoBancario* buscarPorNumeroDeCuenta(int numeroCuenta);
};

