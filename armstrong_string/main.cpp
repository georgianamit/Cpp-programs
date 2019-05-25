#include<iostream>
#include<math.h>

using namespace std;

int main (){
    string num;
    int d, sum = 0, temp = 0;
    cout << "Enter a number: ";
    cin >> num;

    for(int i=0;i<num.size();i++){
        d = (num[i] - '0');
        sum += pow(d, 3);
        temp = (temp * 10) + d;
    }

    if (sum == temp)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
        
    return 0;
}