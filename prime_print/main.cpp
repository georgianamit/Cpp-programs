#include<iostream>

using namespace std;

int main(){
	int start, end;
    bool isPrime;

	cout << "Enter starting number of the interval : ";
	cin >> start;
	cout << "Enter ending number of the interval : ";
	cin >> end;
	cout << "Prime Numbers Between " << start << " and " << end << " : " << endl;

	for(int i=start; i<=end; i++){
        isPrime = true;

        if(i <= 1){
            isPrime = false;
        }else{
            for(int j = 2; j <= i/2; j++){  
                if(i % j == 0){  
                    isPrime = false;  
                    break;  
                }  
            }
        }
  
        if (isPrime)  
            cout << i << " ";  
    }
    cout << endl;

    return 0;
}