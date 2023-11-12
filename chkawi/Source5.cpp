#include <iostream>
using namespace std;

class Src5{
public : struct MyFormation
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
	   cout << MF1.Age << " Years." << endl;
	   cout << MF1.MonthlySalary << endl;
	   cout << MF1.YearlySalary << endl;
	   cout << MF1.Married << endl;
	   cout << MF1.Contact.Address << endl;
	   cout << MF1.Contact.Email << endl;
	   cout << MF1.Contact.Phone << endl;
	   cout << "***************************" << endl;

};
