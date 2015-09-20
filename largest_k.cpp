#include <iostream>

using namespace std;

int num[100] = {0};
int flag[100] = {0};//flag array stores info of which number were selected.

int main(){
    int N = 0, K = 0;
    cin >> N;
    cin >> K;
    for (int i = 0; i < N; i++){
        cin >> num[i];
    }

    int tMax = 0;
    int flagInd = 0;

    for (int k = 0; k < K; k++){
        tMax = 0;
        for (int i = 0; i < N; i++){
            if (tMax < num[i] && flag[i] == 0){
                tMax = num[i];
                flagInd = i;
            }
        }
        flag[flagInd] = 1;
    }

    cout << tMax << endl;

    return 0;
}