#include <iostream>

using namespace std;

int main(){
    int num, bin = 0;

    cout << "Enter a number to convert: ";    
    cin >> num; 

    int remainder, i = 1;

    while (num!=0){
        remainder = num%2;
        num /= 2;
        bin += remainder*i;
        i *= 10;
    }
    cout << "Binary of the number: " << bin << endl;
    
    return 0;
}
