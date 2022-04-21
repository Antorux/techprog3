#pragma once
#include "figure.h"

class Tetrahedron : public Figure
{
	float a;

public:
	Tetrahedron(float a1);
	virtual float square();

};
