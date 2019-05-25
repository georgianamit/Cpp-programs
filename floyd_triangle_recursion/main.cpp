#include <iostream>

using namespace std;

void printFloydTriangle(int rows){
   static int col = 1, num = 1;
   
   if (rows <= 0)
        return;
 
   for(int i = 1; i <= col; ++i)
        cout << num++ << " ";
     
   cout << endl;
   col++;
   
   printFloydTriangle(--rows);  
}

int main(){
    int rows, num = 1;

    cout << "Enter the number of rows of Floyd's triangle to print: ";
    cin >> rows ;

    printFloydTriangle(rows);

    return 0;
}