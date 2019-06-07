#include <iostream>

using namespace std;

int getBinaryNumber(int num) { 
    if (num == 0)  
        return 0;  
    else
        return (num % 2 + 10 * getBinaryNumber(num / 2)); 
} 

int main(){
    int num, bin;

    cout << "Enter a number to convert: ";    
    cin >> num; 

    int remainder, i = 1;

    bin = getBinaryNumber(num);

    cout << "Binary of the number: " << bin << endl;
    
    return 0;
}
