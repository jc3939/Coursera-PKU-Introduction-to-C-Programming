#include <iostream>

using namespace std;


int main(){
    int N = 0;
    int result[100] = {0};
    int count = 0;
    int resultMax = 0;

    while (cin >> N){
        if (N == 0){
            count++;
            break;
        }
        int num[15000] = {0};
        int flag[15000] = {0};
        for (int i = 0; i < N; i++){
            cin >> num[i];
        }
        if (N % 2 != 0){
            int K = N/2 + 1;
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
            resultMax = tMax;
        }
        if (N % 2 == 0){
            int K1 = N/2;
            int K2 = N/2 + 1;
            int tMax1 = 0;
            int tMax2 = 0;
            int flagInd = 0;

            for (int k = 0; k < K2; k++){
                int tMax = 0;
                for (int i = 0; i < N; i++){
                    if (tMax < num[i] && flag[i] == 0){
                        tMax = num[i];
                        flagInd = i;
                    }
                }
                flag[flagInd] = 1;
                if (k == K1 - 1){
                    tMax1 = tMax;
                }
                if (k == K1){
                    tMax2 = tMax;
                }
            }
            resultMax = (tMax1 + tMax2)/2;
        }
        result[count] = resultMax;
        count++;
    }
    for (int i = 0; i<count-1; i++){
        cout << result[i] << endl;
    }
    return 0;
}