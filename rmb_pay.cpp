#include <iostream>

using namespace std;

int main(){
    int N = 0;
    cin >> N;

    int b100 = 0, b50 = 0, b20 = 0, b10 = 0, b5 = 0, b1 = 0;

    b100 = N/100;
    b50 = (N % 100) / 50;
    b20 = (N % 100 % 50) / 20;
    b10 = (N % 100 % 50 % 20) / 10;
    b5 = (N % 100 % 50 % 20 % 10) / 5;
    b1 = N % 100 % 50 % 20 % 10 % 5;

    cout << b100 << endl;
    cout << b50 << endl;
    cout << b20 << endl;
    cout << b10 << endl;
    cout << b5 << endl;
    cout << b1 << endl;

    return 0;
}