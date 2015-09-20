#include <iostream>
using namespace std;

int main() {
	int a = 0, iCompare = 0, sum = 0;

	cin >> a;

	for (int i = 0;i < 5; i++){
		cin >> iCompare;
		if (iCompare < a){
			sum += iCompare;
		}
	}
	cout << sum << endl;
	return 0;
}