#include <iostream>
#include "coordinates.h"
#include "que_one.h"
#include "trangle.h"
#include "globle.h"
#include "circle.h"
int main()
{
    /* question no 1*/
    //double lineOneX1, lineOneY1, lineOneX2, lineOneY2, lineTwoX1, lineTwoY1, lineTwoX2, lineTwoY2;
    //std::cout << "Enter First Line Co-ordinates: " << "\n" << "(x1,y1,x2,y2) :";
    //std::cin >> lineOneX1 >> lineOneY1 >> lineOneX2 >> lineOneY2;

    //std::cout << "Enter First Line Co-ordinates: " << "\n" << "(x1,y1,x2,y2) :";
    //std::cin >> lineTwoX1 >> lineTwoY1 >> lineTwoX2 >> lineTwoY2;

    //LineCoordinates one(3, 4, 2, 5);
    //LineCoordinates two(-3, 1, 4, -2);

    //Line l;

    //double* d = l.findIntersectionPoint(one, two);
    //l.checkParallel(d[0],d[1]);

    /*question no 2 a. */
   /* int flag = 0;
    float x1, y1, x2, y2, x3 = 0, y3, pointX, pointY,area = 0;
    std::cout << "Enter The Trangle 3 Point Co-ordinates(x1, y1, x2, y2, x3, y3): " << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    std::cout << "Enter The Point Co-ordinates (x,y): " << std::endl;
    std::cin >> pointX >> pointY;

    TrangleCoordinates TCoordinates(x1, y1, x2, y2, x3, y3, pointX, pointY);
    Trangle t;
    t.checkWhereIsPointInTrangle(TCoordinates, flag, area);

    if (flag == 1) {
        std::cout << "Point  lies within the Triangle\n";
    }
    else { 
        std::cout << "Point lies outside the Triangle\n"; 
    }

    std::cout << area << std::endl;*/

    /*question no 2.b */
    float h, k, r, x, y;
    std::cout << "Enter The Center Coordiante of circle: " << std::endl;
    std::cin >> h >> k;

    std::cout << "Enter the radius of circle: " << std::endl;
    std::cin >> r;

    std::cout << "Enter Point Coordinates: " << std::endl;
    std::cin >> x >> y;
    CircleCoordinates coordinates(h, k, r, x, y);
    Circle::checkPointInCircle(coordinates);

}