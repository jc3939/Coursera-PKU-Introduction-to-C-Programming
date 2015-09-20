#include <iostream>;

using namespace std;

int main(){
    int num = 0;
    cin >> num;
    int hundred = 0, decimal = 0, integer = 0;
    hundred = num / 100;
    decimal = (num % 100) / 10;
    integer = ((num % 100) % 10);
    cout << hundred << endl;
    cout << decimal << endl;
    cout << integer << endl;
    return 0;
}