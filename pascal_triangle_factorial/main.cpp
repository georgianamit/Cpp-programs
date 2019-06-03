#include<iostream>

using namespace std;

long fact(int n){
	int c;
	long res=1;
	for(c=1; c<=n; c++)
	{
		res = res*c;
	}
	return (res);
}

int main(){
    int rows, coff;

    cout << "Enter the number of rows : ";
    cin >> rows;

	for(int i = 0; i < rows; i++){
        for(int j = 1; j < (rows - i); j++){
            cout << "   ";
        }

        for(int k = 0; k <= i; k++){
            coff = fact(i)/(fact(k)*fact(i-k));
            cout << "      " << coff;
        }
		cout << endl << endl;
	}

    return 0;
}
