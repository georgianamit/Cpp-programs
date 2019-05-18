#include <iostream>

using namespace std;

int main() 
{ 
    float num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3; 
  
    float greatest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3); 
  
    cout << "Greatest number: " << greatest << endl;
  
    return 0; 
}