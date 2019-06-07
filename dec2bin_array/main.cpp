#include <iostream>  

using namespace std;  

int main(){  
    int bin[128], num, i=0;    
    cout << "Enter a number to convert: ";    
    cin >> num;    
    while(num > 0){    
        bin[i]=num%2;    
        num= num/2; 
        i++; 
    }   

    cout << "Binary of the number: ";

    for(int j = i-1; j >= 0; j--){    
        cout << bin[j];    
    }  

    cout << endl;

    return 0;  
}  