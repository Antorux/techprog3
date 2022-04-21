#pragma once
#include "figure.h"
class Ball : public Figure
{
	float r;

public:
	Ball(float r1);
	virtual float square() final;

};
