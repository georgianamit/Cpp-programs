#include <iostream>  

using namespace std;  

int main(){  
    int num,rem,sum=0,temp;  

    cout<<"Enter the Number: ";    
    cin>>num;  

    temp=num;    
    while(temp>0){    
        rem=temp%10;    
        sum=(sum*10)+rem;    
        temp=temp/10;    
    }    
    if(num==sum)    
        cout << num << " is a Palindrome Number." << endl;    
    else    
        cout << num << " is not a Palindrome Number." << endl;   

    return 0;  
}  