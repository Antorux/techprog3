#include "figure.h"
#include "Parall.h"
#include "cmath"



Parallelepiped::Parallelepiped(float x1, float y1, float z1)
{
	this->x = x1;
	this->y = y1;
	this->z = z1;
	AllFigures++;
}


float Parallelepiped::square()
{
	return 2 * (x * y + x * z + y * z);
}