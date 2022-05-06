#include <iostream>

using namespace std;

double perimeter(double l, double w){
	double p = 2 * (l + w);
	return p;
}
double area(double l, double w){
	double a = l * w;
	return a;
}
double cf(double rad){
	double c = 2 * 3.14 * rad;
	return c;
}
double carea(double rad){
	double a = 3.14 * r*r;
	return a;
}
double ftoc(double f){
	double c = (5 * (f - 32)) / 9;
	return c;
}
double ctof(double c){
	double f = 1.8 * c + 32;
	return f;
}
int main(int argc, char** argv) {
	int opt, side#;
	double length, width, radius, temp;
	cout << "1 - Find Area and Perimeter\n2 - Find Area and Circumference\n3 - Convert Fahrenheit to Centigrade\n4 - Convert Centigrade to Fahrenheit\n\n";
	cout << "Enter desired function: ";
	cin >> opt;
	switch (opt){
		case 1:
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
			cout << "Perimeter: " << perimeter(length, width) << "\nArea: " << area(length, width) << endl;
			break;
		case 2:
			cout << "Enter radius: ";
			cin >> radius;
			cout << "Circumference: " << cf(radius) << "\nArea: " << carea(radius) << endl;			
			break;
		case 3:
			cout << "Enter temperature in Fahrenheit: ";
			cin >> temp;
			cout << ctof(temp) << endl;
			break;
		case 4:
			cout << "Enter temperature in Centigrade: ";
			cin >> temp;
			cout << ftoc(temp) << endl;
			break;
		default:
			cout << "Invalid Option\n";
	}
	return 0;
}
