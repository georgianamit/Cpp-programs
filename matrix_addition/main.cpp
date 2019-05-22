#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int a[100][100], b[100][100], sum[100][100];

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> row;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> col;

    cout << "Enter the elements of matrix a: " << endl;
    for (int i = 0;i<row;i++ ) {
        for (int j = 0;j < col;j++ ) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of matrix b: " << endl;
    for (int i = 0;i<row;i++ ) {
        for (int j = 0;j<col;j++ ) {
            cin >> b[i][j];
        }
    }

    // Adding Two matrices
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
                cout << endl;
        }

    return 0;
}