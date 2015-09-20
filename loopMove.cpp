#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	int n = 0, m = 0;
	cin >> n >> m;
	int array[100] = {0};

	for (int i = 0; i < n; i++){
		cin >> array[i];
	}

	for (int i = 0; i < m; i++){
		int temp = 0;
		for (int j = 1; j < n; j++){
			temp = array[0];
			array[0] = array[j];
			array[j] = temp;
		}
	}

	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
	}
	return 0;
}