#pragma once
#include "Point.hpp"
#include "Polygon.hpp"
class TriAngle : public  Polygon
{
public:
	TriAngle(Point p1, Point p2, Point p3);
	Point getP1();
	Point getP2();
	Point getP3();
};