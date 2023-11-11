// chkawi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Source3.cpp"
#include "Source1.cpp"
#include "Source4.cpp"
using namespace std;

struct MyContact
{
	string Address;
	string Phone;
	string Email;

};


struct MyFormation
{
	string Name;
	string City;
	string Country;
	char Gender;
	int Age;
	int MonthlySalary;
	int YearlySalary;
	bool Married;
	MyContact Contact;


};

int main()
{
	//Src3 src;
	Src1 red; 
	Src4 src;
	/*src.rectangle();
	src.circle();
	src.circleDiameter();
	src.circleSquare(); */
	//src.circleSquareAround();
	//src.circleCircumference();
	//src.circleIsoscelesTriangle();   
	//red.power();  
	//red.power2();
	//src.second1();
	//src.second2();

	MyFormation MF1;
	

	MF1.Name = "Charif El khamlichi.";
	MF1.City = "Tetouan.";
	MF1.Country = "Morocco";
	MF1.Gender = 'M';
	MF1.Age = 28;
	MF1.MonthlySalary = 3300;
	MF1.YearlySalary = MF1.MonthlySalary * 12;
	MF1.Married = false;

	MF1.Contact.Address = "AV HAROUNE ERACHID ZKT 02 NR 92";
	MF1.Contact.Email = "elkhamlichi95charif@gmail.com";
	MF1.Contact.Phone = "+212601404051";

	
	cout << "***************************\n\n";
	cout << MF1.Name << endl; 
	cout << MF1.City << endl;
	cout << MF1.Country << endl;
	cout << MF1.Gender << endl;
	cout << MF1.Age <<" Years."<< endl; 
	cout << MF1.MonthlySalary << endl;
	cout << MF1.YearlySalary << endl;
	cout << MF1.Married << endl; 
	cout << MF1.Contact.Address << endl;
	cout << MF1.Contact.Email << endl;
	cout << MF1.Contact.Phone << endl;
	cout << "***************************" << endl;




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

