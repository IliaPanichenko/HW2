#pragma once
#include "Figure.h"
class Quadrangle : public Figure
{
protected:

	int sideA = 0;
	int sideB = 0;
	int sideC = 0;
	int sideD = 0;
	int angleA = 0;
	int angleB = 0;
	int angleC = 0;
	int angleD = 0;
	bool Check() override;
public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
	void print_metod() override;
};