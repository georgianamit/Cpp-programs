#include <iostream>

using namespace std;
 
int findLCM(int x, int y);
 
 
int main(){
    int num1, num2, lcm;
 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
 
    if(num1 > num2)
        lcm = findLCM(num2, num1);
    else
        lcm = findLCM(num1, num2);
 
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
 
    return 0;
}
 
int findLCM(int x, int y){
    static int multiple = 0;

    multiple += y;

    if((multiple % x == 0) && (multiple % y == 0)){
        return multiple;
    }
    else{
        return findLCM(x, y);
    }
}