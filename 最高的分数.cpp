#include <iostream>;

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int score[n];
    for (int i = 0; i < n; i++){
        cin >> score[i];
    }

    int temp = 0;
    for (int i = 0; i < n; i++){
        if (temp < score[i]){
            temp = score[i];
        }
    }

    cout << temp << endl;
    return 0;
}