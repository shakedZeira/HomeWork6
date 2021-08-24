#include "Point.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"
#include "Quadrangle.hpp"
#include "Circle.hpp"
#include "Shape.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point()
{
	_X = 0;
	_y = 0;
}
Point::Point(double x, double y)
{
	_X = x;
	_y = y;
}
double Point::getX()
{
	return _X;
}
double Point::getY()
{
	return _y;
}
void Point::move(double x, double y)
{
	_X = x;
	_y = y;
}
void Point::move(Point other)
{
	_X = other.getX();
	_y = other.getY();
}
double Point::distance(Point other)
{
	double distance;
	double x_distance = pow(_X, 2) - 2 * (_X * other.getX()) + pow(other.getX(), 2);
	double y_distance = pow(_y, 2) - 2 * (_y * other.getY()) + pow(other.getY(), 2);
	distance = sqrt(x_distance + y_distance);
	return distance;
}
Circle::Circle(Point point, double Radius)
{
	_Center = point;
	radius = Radius;
}
Point Circle::GetCenter()
{
	return _Center;
}
double Circle::GetRadius()
{
	return radius;
}
Polygon::Polygon()
{
	vector<Point> points;
	_points = points;

}
Polygon::Polygon(vector<Point> points)
{
	_points = points;
}
int Polygon::numOfPoints()
{
	return _points.size();
}
/*
vector<double> Polygon::getSides()
{
	////to work on
}
*/
vector<Point> Polygon::getPoints()
{
	return _points;
}
TriAngle::TriAngle(Point p1, Point p2, Point p3)
{
	vector<Point> points;
	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);
	Polygon triangle = Polygon(points);
}
//to check
Point TriAngle::getP1()
{
	return _points[0];
}
Point TriAngle::getP2()
{
	return _points[1];
}
Point TriAngle::getP3()
{
	return _points[2];
}
Quadrangle::Quadrangle(Point p1 , Point p2 , Point p3 , Point p4)
{
	vector<Point> points;
	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);
	points.push_back(p4);
	Polygon Quadrangle = Polygon(points);
}
//to check
Point Quadrangle::GetP1()
{
	return _points[0];
}
Point Quadrangle::GetP2()
{
	return _points[1];
}
Point Quadrangle::GetP3()
{
	return _points[2];
}
Point Quadrangle::GetP4()
{
	return _points[3];
}
/*
double Shape::area()
{
	if(Shape)
}
*/

void Shapes()
{
	Shape shapesArr[5];
	string input;
	for (int i = 0; i < 5/*len*/; i++)
	{
		cout << "please enter a name of a shape : (Circle/QuadRangle/Triangle)" << endl;
		cin >> input;
		if (input == "Circle")
		{
			double xcord, ycord,radius;
			cout << "please enter x cord: " << endl;
			cin >> xcord;
			cout << "please enter y cord: " << endl;
			cin >> ycord;
			Point p1 = Point(xcord, ycord);
			cout << "please enter a radius :" << endl;
			cin >> radius;
			Shape s = Circle(p1,radius);
			shapesArr[i] = s;
		}
		else if (input == "QuadRangle")
		{
			double x1, y1, x2, y2, x3, y3, x4, y4;
			cout << "please enter x1: " << endl;
			cin >> x1;
			cout << "please enter y1: " << endl;
			cin >> y1;
			Point p1 = Point(x1, y1);
			cout << "please enter x2: " << endl;
			cin >> x2;
			cout << "please enter y2: " << endl;
			cin >> y2;
			Point p2 = Point(x2, y2);
			cout << "please enter x3: " << endl;
			cin >> x3;
			cout << "please enter y3: " << endl;
			cin >> y3;
			Point p3 = Point(x3, y3);
			cout << "please enter x4: " << endl;
			cin >> x4;
			cout << "please enter y4: " << endl;
			cin >> y4;
			Point p4 = Point(x4, y4);
			Shape Q = Quadrangle(p1, p2, p3, p4); //why in accessble?
			shapesArr[i] = Q;
		}
		else if(input == "Triangle")
		{
			double x1, y1, x2, y2, x3, y3;
			cout << "please enter x1: " << endl;
			cin >> x1;
			cout << "please enter y1: " << endl;
			cin >> y1;
			Point p1 = Point(x1, y1);
			cout << "please enter x2: " << endl;
			cin >> x2;
			cout << "please enter y2: " << endl;
			cin >> y2;
			Point p2 = Point(x2, y2);
			cout << "please enter x3: " << endl;
			cin >> x3;
			cout << "please enter y3: " << endl;
			cin >> y3;
			Point p3 = Point(x3, y3);
			Shape Tri = TriAngle(p1, p2, p3);
			shapesArr[i] = Tri;
		}
	}
}
int main()
{
	Shapes();
}