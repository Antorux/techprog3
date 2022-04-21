#include "Tetra.h"
#include "figure.h"
#include "cmath"

Tetrahedron::Tetrahedron(float a1)
{
	a = a1;
	AllFigures++;


}

float Tetrahedron::square()
{
	return sqrt(3.) * pow(a, 2);
}