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

    if (num1 >= num2)
    {
        if (num1 >= num3)
            cout << "Largest number: " << num1 << endl;
        else
            cout << "Largest number: " << num3 << endl;
    }
    else
    {
        if (num2 >= num3)
            cout << "Largest number: " << num2 << endl;
        else
            cout << "Largest number: " << num3 << endl;
    }

    return 0;
}