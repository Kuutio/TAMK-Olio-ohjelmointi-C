#include "Suorakaide.h"

Suorakaide::Suorakaide(double sivut1_, double sivut2_):
	sivut1(sivut1_),sivut2(sivut2_)
{
	
}

double Suorakaide::pintaAla() const
{
	return sivut1*sivut2;
}

Suorakaide::~Suorakaide()
{
}

