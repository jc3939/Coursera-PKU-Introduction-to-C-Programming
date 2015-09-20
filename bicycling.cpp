#include <iostream>
using namespace std;

int main() {
	int n = 0, distance = 0;

	cin >> n;

	for (int i = 0;i < n; i++){
		cin >> distance;
		double biking = 0.0;
		double walking = 0.0;
		biking = 50 + (distance*1.0/3.0);
		walking = distance*1.0/1.2;
		if (biking < walking){
			cout << "Bike" << endl;
		}
		if (biking > walking){
			cout << "Walk" << endl;
		}
		if (biking == walking){
			cout << "All" << endl;
		}

	}
	return 0;
}