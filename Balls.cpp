#include "Balls.h"
#include "figure.h"
#include <cmath>
Ball::Ball(float r1)
{
	r = r1;
	AllFigures++;

}

float Ball::square()
{
	return 4 * std::acos(-1.) * std::pow(r, 2.);
}

