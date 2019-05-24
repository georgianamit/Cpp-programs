#include <iostream>

using namespace std;

int main() {
    int num1, num2, temp;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    while (num1%num2 != 0){
        temp = num1;
        num1 = num2;
        num2 = temp%num2;
    }                              

    cout << "HCF is " << num2 << endl;
    return 0;
}
