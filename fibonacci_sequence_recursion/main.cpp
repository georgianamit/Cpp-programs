
#include<iostream>

using namespace std;

// Recursive function to give fibonacci sequence
int fib(int n){
    if(n < 2){
        return n;
    }else{
        return fib(n-2) + fib(n-1);
    }    
}

int main(){
    // enter the number of terms of fibonacci sequence to print
    int n;
    cout << "Enter a number: ";
    cin >> n;   

    int i=1;
    while(i<=n){
        // Printing the fibonacci sequence
        cout << fib(i) << " ";
        i++;
    }
    

    return 0;                  
 
}
   