#include <iostream>

using namespace std;

int getGCD(int num1, int num2){
    int gcd;
    for(int i=1; i <= num1 && i <= num2; ++i){
        if(num1 % i == 0 && num2 % i == 0)
        gcd = i;
    }
    return gcd;
}

int main(){
    int num1, num2, gcd, lcm;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    gcd = getGCD(num1, num2);

    lcm = (num1 * num2) / gcd;
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}