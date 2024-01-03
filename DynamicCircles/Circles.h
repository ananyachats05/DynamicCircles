#ifndef CIRCLES_H
#define CIRCLES_H


class Circles
{
public:
	Circles();
	Circles(double radius);
	double getRadius() const;
	void setRadius(double radius);
	double circumference() const;
	double area() const;

private:
	double radius;
	const double MY_PI;
};
#endif 
