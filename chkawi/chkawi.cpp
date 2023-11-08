// chkawi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Source3.cpp"
#include "Source1.cpp"
using namespace std;


int main()
{
	Src3 src;
	Src1 red; 

	src.rectangle();
	src.circle();
	src.circleDiameter();
	src.circleSquare(); 
	src.circleSquareAround();
	//src.circleCircumference();
	//src.circleIsoscelesTriangle();   
	red.power();  

	/*bool Result, True; 


	cout << (12 >= 12) << endl;
	cout << (12 > 7) << endl;
	cout << (8 < 6) << endl;
	cout << (8 == 8) << endl;
	cout << (12 <= 12) << endl;
	cout << (7 == 5) << endl << endl << endl;


	cout << !(12 >= 12) << endl;
	cout << !(12 < 7) << endl;
	cout << !(8 < 6) << endl;
	cout << !(8 == 8) << endl;
	cout << !(12 <= 12) << endl;
	cout << !(7 == 5) << endl<< endl<< endl;



	cout << (1 && 1) << endl;
	cout << (true && 0) << endl;
	cout << (0 || 1) << endl;
	cout << (0 || 0) << endl;
	cout << (!0) << endl;
	cout << !(1 || 0) << endl << endl << endl;



	Result = ((7 == 7) && (7 > 5));
	cout << Result << endl;

	Result= ((7 == 7) && (7 < 5));
	cout << Result << endl; 

	Result= ((7 == 7) || (7 < 5));
	cout << Result << endl; 

	Result= ((7 == 7) || (7 > 5));
	cout << Result << endl; 

	Result= (!(7 == 7) && (7 > 5));
	cout << Result << endl; 

	Result= ((7 == 7) && !(7 < 5));
	cout << Result << endl << endl << endl;



	Result = (5 > 6 && 7 == 7) || (1 || 0);
	cout << Result << endl;

	Result = !(5 > 6 && 7 == 7) || (1 || 0);
	cout << Result << endl; 

	Result = !(5 > 6 && 7 == 7) || !(1 || 0);
	cout << Result << endl; 

	Result = !(5 > 6 || 7 == 7) && !(1 || 0);
	cout << Result << endl;

	Result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
	cout << Result << endl;

	Result = ((5 > 6) && !(7 <= 8) && (8 > 1 || 4 <= 3)) || true;
	cout << Result << endl; */
	return 0;
}

