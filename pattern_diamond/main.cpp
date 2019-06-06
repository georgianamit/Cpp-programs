#include <iostream>

using namespace std;

int main(){
    int rows, space;

    cout << "Enter the number of rows: ";
    cin >> rows;

    space = rows - 1;

    for (int i = 1; i<=rows; i++){
        for (int j = 1; j<=space; j++)
            cout << "  ";

        --space;

        for (int k = 1; k<= 2*i-1; k++)
            cout << "* ";

        cout << endl;
    }

    space = 1;

    for (int i = 1; i<= rows - 1; i++){
        for (int j = 1; j<= space; j++)
            cout << "  ";

        space++;

        for (int k = 1 ; k<= 2*(rows-i)-1; k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}