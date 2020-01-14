#pragma once
#ifndef Suorakaide_H
#define Suorakaide_H
#include "Kuvio.h"
class Suorakaide :
	public Kuvio
{
private:
	double sivut1;
	double sivut2;
public:
	Suorakaide(double sivut1_, double sivut2_);
	double pintaAla()const;
	~Suorakaide();
};
#endif

