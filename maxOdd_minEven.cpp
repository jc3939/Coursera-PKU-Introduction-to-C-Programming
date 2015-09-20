#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
    const int n = 6;
    int number[n];
    for (int i = 0; i < n; i++){
        cin >> number[i];
    }

    int minEven = 2147483647;
    int maxOdd = 0;

    for (int i = 0; i < n; i++){
        if (number[i] % 2 == 0){
            if (minEven > number[i]){
                minEven = number[i];
            }
        }
        if (number[i] % 2 != 0){
            if (maxOdd < number[i]){
                maxOdd = number[i];
            }
        }
    }

    int result = 0;

    result = abs(maxOdd - minEven);

    cout << result << endl;
    return 0;
}