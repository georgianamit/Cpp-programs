#include <iostream>  

using namespace std;  

int main(){  
    int num;
    bool isPrime = true; 

    cout << "Enter the Number: ";  
    cin >> num; 

    if(num <= 1){
        isPrime = false;
    }

    for(int i = 2; i <= num/2; i++){  
        if(num % i == 0){  
            isPrime = false;  
            break;  
        }  
    }  

    if (isPrime)  
        cout << num << " is Prime." << endl;  
    else
        cout<< num << " is not Prime." << endl;  

    return 0;  
}  