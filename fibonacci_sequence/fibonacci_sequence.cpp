
#include<iostream>

using namespace std;

int main(){
    // enter the number of terms of fibonacci sequence to print
    int n;
    cout << "Enter a number: ";
    cin >> n;   

    // stores the previous value
    int pre = 0;                                 
    // stores the current value
    int cur=1;                                   
    // loop to print n terms of fibonacci sequence
    for(int i=1; i<=n; i++){
        // prints the current value
        cout << cur << " ";                  
        // stores the current value to temp variable
        int temp=cur;                            
        // changes the current value by adding the prvious value to itself
        cur = cur + pre;                     
        // changes the previous value to temp value
        pre = temp;
    }
    return 0;                  
 
}
   