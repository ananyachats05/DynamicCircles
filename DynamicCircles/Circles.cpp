#include "Circles.h"
#include <cmath>
using namespace std;

//const double MY_PI = 3.14159;

Circles::Circles() : MY_PI(3.14159)
{
	radius = 1;
}

Circles::Circles(double radius) : MY_PI(3.14159)
{
	this->radius = radius;
}

double Circles::getRadius() const
{
	return radius;
}

void Circles::setRadius(double radius)
{
	this->radius = radius;
}

double Circles::circumference() const
{
	return 2 * MY_PI * radius;
}

double Circles::area() const
{
	return MY_PI * pow(radius, 2);
}