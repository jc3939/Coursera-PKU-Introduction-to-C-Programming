#include <iostream>
using namespace std;

int num[1000] = {0};

int main() {
	int n = 0, k = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++){
		cin >> num[i];
	}

	for (int i = 0; i < n - 1; i++){
		if (num[i] <= k){
			for (int j = i + 1; j < n; j++){

				if (num[i] + num[j] == k){
					cout << "yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "no" << endl;
	
	return 0;
}