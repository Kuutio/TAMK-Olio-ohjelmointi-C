#include "Ympyra.h"
#include <cmath>

Ympyra::Ympyra(double sade_):
	sade(sade_)
{
}

double Ympyra::pintaAla() const
{
	const float PI = atan(1) * 4;
	return PI*(sade*sade);
}

Ympyra::~Ympyra()
{
}
