#pragma once
#ifndef Ympyra_H
#define Ympyra_H
#include "Kuvio.h"
#include <cmath>

class Ympyra :
	public Kuvio
{
private:
	double sade;
public:
	Ympyra(double sade_);
	double pintaAla()const;
	~Ympyra();

};
#endif

