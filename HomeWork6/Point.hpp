#pragma once
class Point
{
private:
	double _X;
	double _y;
public:
	Point();
	Point(double x, double y);
	double getX();
	double getY();
	void move(double x, double y);
	void move(Point Other);
	double distance(Point Other);
};