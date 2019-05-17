#include<iostream>

using namespace std;

int main() {
    string num;
    int sum = 0;

    cout << "Enter the number : ";
    cin >> num;

    for(int i=0;i<num.size();i++){
        sum += (num[i] - '0');
    }

    cout << "The sum of the digits: "<< sum << endl;

    return 0;
}