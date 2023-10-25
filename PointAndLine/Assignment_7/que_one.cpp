#include "que_one.h"

double* Line::makeEquation(double x1, double y1, double x2, double y2)
{
	double a1 = y2 - y1;
	double b1 = x1 - x2;
	double c1 = (x1 * y2) - (x2 * y1);
	double arr[3] = { a1,b1,c1 };
	return &arr[0];
}

double* Line::findIntersectionPoint(LineCoordinates& lineOne, LineCoordinates& lineTwo)
{
	double* lineOneEquation = makeEquation(lineOne.x1, lineOne.y1, lineOne.x2, lineOne.y2);
	double a1 = lineOneEquation[0];
	double b1 = lineOneEquation[1];
	double c1 = lineOneEquation[2];

	double* lineTwoEquation = makeEquation(lineTwo.x1, lineTwo.y1, lineTwo.x2, lineTwo.y2);
	double a2 = lineTwoEquation[0];
	double b2 = lineTwoEquation[1];
	double c2 = lineTwoEquation[2];

	double det = a1 * b2 - a2 * b1;
    double x = (b2 * c1 - b1 * c2) / det;
    double y = (a1 * c2 - a2 * c1) / det;

	//double x = ((b1 * c2) - (b2 * c1)) / ((a1 * b2) - (a2 - b1));
	//double y = ((c1 * a2) - (c2 * a1)) / ((a1 * b2) - (a2 - b1));

	double arr[] = { x,y };
	return &arr[0];
}

void Line::checkParallel(double x,double y)
{
	if (x * y == -1)
	{
		std::cout << "Line is Perpendicular" << std::endl;
	}
	else if (x == y)
	{
		std::cout << "Line is Parallel" << std::endl;
	}
	else {
		std::cout << "Line is Interceting"<<"\n Here the point of intercepting: " << std::endl;
		std::cout << x<<std::endl<<y << std::endl;
	}
}

