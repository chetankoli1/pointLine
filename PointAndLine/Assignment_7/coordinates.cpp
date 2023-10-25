#include "coordinates.h"


LineCoordinates::LineCoordinates(double x1, double y1, double x2, double y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

TrangleCoordinates::TrangleCoordinates(float x_one, float y_one,  float x_two, float y_two, float x_three, float y_three, float uPointX, float uPointY) {
	x1 = x_one;
	y1 = y_one;
	x2 = x_two;
	y2 = y_two;
	x3 = x_three;
	y3 = y_three;

	pointX = uPointX;
	pointY = uPointY;
}
CircleCoordinates::CircleCoordinates(const float h, const float k, const float r, const float pointX,const float pointY)
{
	this->h = h;
	this->k = k;
	this->r = r;

	this->pointX = pointX;
	this->pointY = pointY;
}