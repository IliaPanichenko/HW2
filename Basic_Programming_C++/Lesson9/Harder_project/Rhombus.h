#pragma once
#include "Quadrangle.h"
class Rhombus:public Quadrangle
{
public:
	bool Check() override;
	Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};