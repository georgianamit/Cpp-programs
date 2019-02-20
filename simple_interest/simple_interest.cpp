/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	float p;
	float r;
	float t;
	// Taking an input for principle
	cout << "Enter the principle: ";
	cin >> p;
	// Taking an input for rate per year
	cout << "Enter the rate: ";
	cin >> r;
	// Taking an input for time
	cout << "Enter the time(In Year): ";
	cin >> t;
	// formula for S.I. is (p*r*t)/100
	float si = (p*r*t)/100;
	
	// printing the simple interest
	cout << "The Simple Interest is "  << si;

    return 0;
}