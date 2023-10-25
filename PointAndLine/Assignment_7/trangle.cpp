#include "trangle.h"
#include "globle.h"

void Trangle::checkWhereIsPointInTrangle(TrangleCoordinates tranglePoints, int flag, float& area)
{
    float innerTA, innerTB, innerTC, dist_a, dist_b, dist_c, innerDist_d, innerDist_e, innerDist_f;

    dist_a = globle::distance(tranglePoints.x1, tranglePoints.y1, tranglePoints.x2, tranglePoints.y2);
    dist_b = globle::distance(tranglePoints.x2, tranglePoints.y2, tranglePoints.x3, tranglePoints.y3);
    dist_c = globle::distance(tranglePoints.x3, tranglePoints.y3, tranglePoints.x1, tranglePoints.y1);
    area = globle::calculateAreaOfTrangle(dist_a, dist_b, dist_c);

    innerDist_d = globle::distance(tranglePoints.x1, tranglePoints.y1, tranglePoints.pointX, tranglePoints.pointY);
    innerDist_e = globle::distance(tranglePoints.x2, tranglePoints.y2, tranglePoints.pointX, tranglePoints.pointY);
    innerDist_f = globle::distance(tranglePoints.x3, tranglePoints.y3, tranglePoints.pointX, tranglePoints.pointY);

    innerTA = globle::calculateAreaOfTrangle(innerDist_d, dist_a, innerDist_e);
    innerTB = globle::calculateAreaOfTrangle(innerDist_e, dist_b, innerDist_f);
    innerTC = globle::calculateAreaOfTrangle(innerDist_f, dist_c, innerDist_d);

    float secondArea = innerTA + innerTB + innerTC;

    if (area < secondArea)
    {
        std::cout << "Point Outside The Trangle" << std::endl;
    }
    if (area > secondArea)
    {
        std::cout << "Point Inside The Trangle" << std::endl;
    }
    if (area == secondArea)
    {
        std::cout << "Point within The Trangle" << std::endl;
    }
  //  float res = area - (innerTA + innerTB + innerTC);

    flag = position(area, innerTA, innerTB, innerTC);
 }

int Trangle::position(float &area, int a, int b, int c) {
    float res = area - (a + b + c);

    if (res < 0)
    {
        res *= -1;
    }

    if (res == 0 || res < 0.001)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}