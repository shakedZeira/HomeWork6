#pragma once
#include "Point.hpp"
#include "Shape.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Polygon : public Shape
{
protected:
	vector<Point> _points;
public:
	Polygon();
	Polygon(vector<Point> points);
	int numOfPoints();
	vector<double> getSides();
	vector<Point> getPoints();
};