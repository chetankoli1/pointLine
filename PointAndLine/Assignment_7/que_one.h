#pragma once
#include<iostream>
#include "coordinates.h"
class Line
{
public:
	//static double lineSlope(double, double, double, double);
	double* findIntersectionPoint(LineCoordinates&, LineCoordinates&);
	double* makeEquation(double, double, double, double);
	void checkParallel(double x, double y);
};

