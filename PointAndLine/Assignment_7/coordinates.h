#pragma once
class LineCoordinates
{
public:
	double x1, y1, x2, y2;

	LineCoordinates(double, double, double, double);
};

class TrangleCoordinates {
public:
	float x1, x2, y1, y2, x3, y3;
	float pointX, pointY;

	TrangleCoordinates(float, float, float, float, float, float, float, float);

};

class CircleCoordinates
{
public:
	float h, k, r;
	float pointX, pointY;
	CircleCoordinates(const float h,const float k, const float r,const float x, const float y);
};