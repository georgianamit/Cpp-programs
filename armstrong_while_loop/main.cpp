#include<iostream>
#include<math.h>

using namespace std;

int getDigitCount(long long n) { 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}

int main (){
    int num, temp, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int order = getDigitCount(num);

    temp = num;
    while (temp != 0){
        rem = temp % 10;
        sum = sum + pow(rem, order);
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
        
    return 0;
}