#include <iostream>
using namespace std;

int main() {
	int N = 0, K = 0;

	while (cin >> N >> K){
		double houseValue = 200;
		int i = 0;

		for (i = 0; i < 20; i++){
			if (N*(i+1) >= houseValue){
				cout << i+1 << endl;
				break;
			}
			houseValue = houseValue * (1 + K*1.0/100);
		}
		if (i == 20){
			cout << "Impossible" << endl;
		}
	}
	return 0;
}