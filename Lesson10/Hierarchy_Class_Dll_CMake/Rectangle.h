#pragma once
#include "Quadrangle.h"
class Rectangle:public Quadrangle
{
public:
	bool Check() override;
	Rectangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
};
