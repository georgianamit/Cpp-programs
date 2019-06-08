#include <iostream>

using namespace std;

int main() {
    int num1, num2, lcm, mul;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    lcm = (num1 > num2) ? num1 : num2;

    while(true) {
        if( lcm%num1 == 0 && lcm%num2 == 0 ) {
            cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
            break;
        }
        lcm += lcm;
    }

    return 0;
}