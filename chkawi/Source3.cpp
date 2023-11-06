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

		int r = 5, PI=3.14, Area; 


		Area = ceil(PI * r * r);

		cout << "the Circle area is: " << Area << endl;


	}

	public: void circleDiameter () {

		int D = 10, PI=3.14, Area; 


		Area = ceil(PI * D * D)/4;

		cout << "the Circle Through Diameter area is: " << Area << endl;



	}
	
	public: void circleSquare () {

		int A = 10, PI=3.14, Area; 


		Area = ceil(PI * A * A) / 4; 

		cout << "the Circle area inscibed in square is: " << Area << endl;




	}



};