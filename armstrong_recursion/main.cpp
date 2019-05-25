#include<iostream>
#include<math.h>

using namespace std;

int getCubeSum(int num) {

    if(num == 0){
        return 0;
    }else{
        return pow(num%10, 3) + getCubeSum(num/10);
    }
}

int main (){
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    sum = getCubeSum(num);

    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
        
    return 0;
}