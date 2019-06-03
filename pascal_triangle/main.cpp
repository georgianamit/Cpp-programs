#include<iostream>

using namespace std;
 
int main(){
    int rows, coff;
    cout << "Enter the number of rows : ";
    cin >> rows;
 
    for(int i = 0; i < rows; i++){
        coff = 1;

        for(int j = 1; j < (rows - i); j++){
            cout << "   ";
        }
        
        for(int k = 0; k <= i; k++){
            cout << "      " << coff;
            coff = coff * (i - k) / (k + 1);
        }

        cout << endl << endl;
    }

    return 0;
}