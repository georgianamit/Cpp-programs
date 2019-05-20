#include <iostream>
#include <math.h>
 
using namespace std;
 

int reverseNumber(int num);
 
int main(){
    int num, reverse;
 
    cout<<"Enter a number: ";
    cin>>num;
 
    reverse = reverseNumber(num);
 
    cout<<"Reverse Number: "<<reverse << endl;
 
    return 0;
}
 
//Recursive function to find reverse of any number 
int reverseNumber(int num){
    // Finding total digits in num
    int digits = (int) log10(num);
 
    // Base condition
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digits)) + reverseNumber(num/10));
}