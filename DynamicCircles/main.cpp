#include<iostream>
#include"Circles.h"

using namespace std;

void printCircles(Circles** circleArray, int numCircles);
int main()
{
	int numCircles;
	int radius;
	cout << "How many circles do you want to create? ";
	cin >> numCircles;

	Circles** circle = new Circles * [numCircles];
	for (int i = 0; i < numCircles; i++)
	{
		cout << "What radius for circle " << i<<"?" << endl;
		cin >> radius;
		circle[i] = new Circles(radius);
	}
	cout << endl;
	printCircles(circle, numCircles);

	//delete individual circles
	for (int i = 0; i < numCircles ;i++)
	{
		delete circle[i];
		circle[i] = nullptr;
	}
	delete[] circle;

	return 0;
}

void printCircles(Circles** circleArray, int numCircles)
{
	for (int i = 0; i < numCircles; i++)
	{
		cout << "The circle of radius " << circleArray[i]->getRadius() << " has an area of " << circleArray[i]->area()
			<< " sq units and a perimeter of " << circleArray[i]->circumference() << " units. voila!" << endl;
		cout << endl;
	}
}