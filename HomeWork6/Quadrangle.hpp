#pragma once
#include "Point.hpp"
#include "Polygon.hpp"
class Quadrangle : public Polygon  
{
	Quadrangle(Point p1, Point p2, Point p3, Point p4);
	Point GetP1();
	Point GetP2();
	Point GetP3();
	Point GetP4();
};
