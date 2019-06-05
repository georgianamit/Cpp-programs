#include<iostream>
#include<math.h>

using namespace std;

int main (){  
    int i = 2, num, rem, sum=1;

    cout << "Enter the number: ";
    cin >> num;

    while(i <= sqrt(num)){
        rem = num % i;
        if (rem == 0)
            if(pow(i,2) == num)
                sum = sum + i;
            else
                sum = sum + i + num/i;
        i++;
    }
    if (sum == num)
        cout << num << " is a perfect number." << endl;
    else
        cout << num <<" is not a perfect number." << endl;

    return 0;
}