#include <iostream>
#include <cmath>
using namespace std;

		class Src1
{
		public: void power() {

		int a, b, c;

			cout << "Enter the number a: " << endl;
			cin >> a;
			cout << "Enter the number b: " << endl;
			cin >> b;
			cout << "Enter the number c: " << endl;
			cin >> c;
				a = a * a;
				b = b * b * b;
				c = c * c * c * c;
			cout << "a= " << a << endl;
			cout << "b= " << b <<  endl;
			cout << "c= " << c << endl;

}



		
		public: void power2() {

			int a=2;  
			int M=4; 

			cout << "Power value : a^M=(2^4) : " << pow(a, M) << endl;

			
}			
};

