#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double x[100], y[100];
    double distance = 0.0;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    double maxdist  = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            distance = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
            if (maxdist < distance){
                maxdist = distance;
            }
        }
    }
    cout << fixed << setprecision(4) << maxdist << endl;

    return 0;
}