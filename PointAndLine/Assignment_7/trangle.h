#pragma once
#include "coordinates.h"
#include<iostream>
#include<math.h>
class Trangle
{
public:
	void checkWhereIsPointInTrangle(TrangleCoordinates tranglePoints, int flag, float& area);
	int position(float& area, int a, int b, int c);
};
