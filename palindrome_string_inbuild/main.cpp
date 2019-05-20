#include<iostream>
#include<string.h> 
#include<algorithm>

using namespace std; 

int main() 
{ 
    string str, rev;

    cout << "Enter a string : ";
    cin >> str;
    
    rev = str;

    // inbuild reverse function 
    reverse(rev.begin(), rev.end()); 

    if (str == rev) {
        cout << str << " is a palindrome." << endl; 
    }    
    else {
        cout << str << " is not a palindrome." << endl; 
    }
    return 0; 
} 