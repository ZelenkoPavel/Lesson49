#include <iostream>

using namespace std;

class Plane {
public:
	string name;
	int speed;
	double length;
	double height;
	int count;

};

int main() {
	int n;
	n = 10;

	Plane plane1, plane2;
	const int size = 5;
	Plane planes[size];

	planes[0].name = "";


	plane1.name = "boing747-400";
	plane1.speed = 950;
	plane1.length = 70.;
	plane1.height = 19.41;
	plane1.count = 700;
}