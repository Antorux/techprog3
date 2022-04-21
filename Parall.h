#include "figure.h"
class Parallelepiped : public Figure
{
	float x, y, z;

public:

	Parallelepiped(float x1, float y1, float z1);

	virtual float square();

};