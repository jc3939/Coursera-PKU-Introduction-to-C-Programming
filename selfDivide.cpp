#include <iostream>
using namespace std;

int num[1000] = {0};

int main() {
	int num = 0, n10 = 0, n1 = 0;

	cin >> num;

	for (int i = 10; i <= num; i++){
		n10 = i / 10;
		n1 = i % 10;
		if (i % (n10 + n1) == 0){
			cout << i << endl;
		}
	}
	
	return 0;
}