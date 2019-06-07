#include <iostream>

using namespace std;


int main(){
    int num;
    unsigned int range = 32768;

    cout << "Enter a number to convert: ";    
    cin >> num; 

    cout << "Binary of the number: ";
    
    while(range > 0){
        if((num & range) == 0 )
            cout << "0";
        else
            cout << "1";
        range = range >> 1 ; 
    }

    cout << endl;
    
    return 0;
}
