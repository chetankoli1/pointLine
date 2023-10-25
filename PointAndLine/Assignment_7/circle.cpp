#include "circle.h"


void Circle::checkPointInCircle(const CircleCoordinates& coordinates)
{
	//(x – h)2+ (y – k)2 = r2;
	float dist = globle::distance(coordinates.k,coordinates.h,coordinates.pointX,coordinates.pointX);
    if (dist < coordinates.r) {
        std::cout << "The point is inside the circle." << std::endl;
    }
    else if (dist == coordinates.r) {
        std::cout << "The point is on the circle." << std::endl;
    }
    else {
        std::cout << "The point is outside the circle." << std::endl;
    }
}