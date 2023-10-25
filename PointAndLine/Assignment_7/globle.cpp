#include "globle.h"

float globle::distance(float x1, float y1, float x2, float y2)
{
	float dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return dist;
}

float globle ::calculateAreaOfTrangle(float a, float b, float c) {
	float s;

	s = (a + b + c) / 2.0;
	float area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}

