#pragma once
#include "Point.hpp"
#include "Shape.hpp"
class Circle : public Shape
{
private:
	Point _Center;
	double radius;
public:
	Circle(Point point, double radius);
	Point GetCenter();
	double GetRadius();
};