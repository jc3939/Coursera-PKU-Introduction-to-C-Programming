#include <iostream>
using namespace std;

int main(){
    int n = 0, x = 0, y = 0;

    cin >> n >> x >> y;
    int result = 0;
    if (y % x == 0){
        result = n - (y / x);
    } else {
        result = n - (y / x) - 1;
    }
    if (result >= 0){
    	cout << result << endl;
    } else {
    	cout << 0 << endl;
    }
    return 0;
}