#include <iostream>

using namespace std;

int main() {
    int num1, num2, gcd;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    while(num1 != num2){
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    cout << "GCD is " << num1 << endl;
    return 0;
}