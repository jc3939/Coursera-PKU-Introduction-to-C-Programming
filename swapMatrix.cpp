#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int matrix[5][5] = {0};

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> matrix[i][j];
		}
	}
	int n = 0, m = 0;
	cin >> n >> m;
	if (n > 4 || m > 4 || n < 0 || m < 0){
		cout << "error" << endl;
		return 0;
	}
	for (int j = 0; j < 5; j++){
		int temp = 0;
		temp = matrix[n][j];
		matrix[n][j] = matrix[m][j];
		matrix[m][j] = temp;
	}
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	return 0;
}