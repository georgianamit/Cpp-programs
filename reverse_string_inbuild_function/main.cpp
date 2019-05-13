#include<iostream>
#include<algorithm> 

using namespace std; 

int main() 
{ 
    string str;

    cout << "Enter a string : ";
    cin >> str;

    // inbuild reverse function 
    reverse(str.begin(), str.end()); 
  
    cout << "Reversed string: " << str << endl; 
    return 0; 
} 