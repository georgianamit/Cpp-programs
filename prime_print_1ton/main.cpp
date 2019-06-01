#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int  end;
    bool isPrime;

	cout << "Enter the end of the range : ";
	cin >> end;
	cout << "Prime Numbers Between 1" << " and " << end << " : " << endl;

	for(int i=2; i<=end; i++){
        isPrime = true;

        for(int j = 2; j <= sqrt(i); j++){  
            if(i % j == 0){  
                isPrime = false;  
                break;  
            }  
        }
  
        if (isPrime)  
            cout << i << " ";  
    }
    cout << endl;

    return 0;
}