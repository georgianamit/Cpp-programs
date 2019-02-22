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
	cout << "The Simple Interest is "  << si << endl;

    return 0;
}