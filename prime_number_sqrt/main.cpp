#include <iostream>  
#include <math.h>

using namespace std;  

int main(){  
    int num;
    bool isPrime = true; 

    cout << "Enter the Number: ";  
    cin >> num; 

    if(num <= 1){
        isPrime = false;
    }else{
        for(int i = 2; i <= sqrt(num); i++){  
            if(num % i == 0){  
                isPrime = false;  
                break;  
            }  
        }
    }

    if (isPrime)  
        cout << num << " is Prime." << endl;  
    else
        cout<< num << " is not Prime." << endl;  

    return 0;  
}  