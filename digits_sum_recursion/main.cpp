#include<iostream>

using namespace std;

int getDigitSum(int num) {

    if(num == 0){
        return 0;
    }else{
        return num%10 + getDigitSum(num/10);
    }
}

int main() {
   int num, sum = 0;

   cout << "Enter the number : ";
   cin >> num;

   cout << "The sum of the digits: "<< getDigitSum(num) << endl;

   return 0;
}