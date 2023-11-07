#include <iostream>
#include <cmath>
using namespace std;

class Src3
{
public: void rectangle() {

	int a = 5, d = 40, Area;

	Area = a * sqrt(d * d - a * a);

	cout << "the rectangle area: " << Area << endl;

}

public: void circle() {

	int r = 5, PI = 3.14, Area;


	Area = ceil(PI * r * r);

	cout << "the Circle area is: " << Area << endl;


}

public: void circleDiameter() {

	int D = 10, PI = 3.14, Area;


	Area = ceil(PI * D * D) / 4;

	cout << "the Circle Through Diameter area is: " << Area << endl;



}

public: void circleSquare() {

	int A = 10, PI = 3.14, Area;


	Area = ceil(PI * A * A) / 4;

	cout << "the Circle area inscibed in square is: " << Area << endl;




}

public: void circleSquareAround() {

	int a = 5, b = 6, c = 7;

	float PI = 3.14, Area, p, T;
	/*	   cout << "Please enter the first number a: " << endl;
		   cin >> a;
		   cout << "Please enter the second number b: " << endl;
		   cin >> b;
		   cout << "Please enter the thert number c: " << endl;
		   cin >> c;*/

	p = (a + b + c) / 2;
	cout << p << endl;


	T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	cout << T << endl;
	T = T * T;

	Area = floor(PI * T);

	cout << "the Circle area Circle described around an arbitrary triangle is: " << Area << endl;






}
//
//	public: void circleCircumference() {
//
//	int L;
//	double	PI = 3.14, Area;
//
//	cout << "Please enter L: " << endl;
//	cin >> L;
//
//	Area = floor((L * L) / (4 * PI));
//
//	cout << "the Circle area along the circumference is: " << Area << endl;
//
//}



	

	
	public: void circleIsoscelesTriangle () {

		

		double	PI = 3.14, Area,a,b;

		cout << "Please enter a: " << endl;
		cin >> a; 

		cout << "Please enter b: " << endl;
		cin >> b; 

		/*Area = floor(PI * b * b / 4) *((2 * a - b) /(2 * a + b));*/
		Area = floor(((PI * b * b) / 4) * ((2 * a - b) / (2 * a + b)));


		cout << "the Circle area  In  scribed in an Isosceles Triangle is: " << Area << endl;


}

};