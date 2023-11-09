#include <iostream>
#include <cmath>
using namespace std;

class Src4
{
public: void second1() {

	int NumberOfDays, NumberOfHours,
		NumberOfMinutes, NumberOfSeconds, TotalSeconds;

		

	cout << "Please enter the NumberOfDays \n";
	cin >> NumberOfDays;
	cout << "Please enter the NumberOfHours \n";
	cin >> NumberOfHours;
	cout << "Please enter the NumberOfMinutes \n";
	cin >> NumberOfMinutes;
	cout << "Please enter the NumberOfSeconds \n";
	cin >> NumberOfSeconds;

	TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) +
		(NumberOfMinutes * 60) + NumberOfSeconds; 

	cout << "Total seconds = " << TotalSeconds << endl;




}
};
