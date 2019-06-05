#include<iostream>

using namespace std;

int main (){  
    int i = 1, num, rem, sum=0;

    cout << "Enter the number: ";
    cin >> num;

    while(i < num){
        rem = num % i;
        if (rem == 0)
            sum = sum + i;
        i++;
    }
    if (sum == num)
        cout << num << " is a perfect number." << endl;
    else
        cout << num <<" is not a perfect number." << endl;

    return 0;
}