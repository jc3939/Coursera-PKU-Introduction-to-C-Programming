#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int n = 0;

	int num = 0;

	cin >> n;

	int matrix[100][100] = {0};

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> matrix[i][j];
		}
	}

	for (int i = 1; i < n - 1; i++){
		for (int j = 1; j < n - 1; j++){
			if (abs(matrix[i][j] - matrix[i-1][j]) >= 50 && abs(matrix[i][j] - matrix[i+1][j]) >= 50 && abs(matrix[i][j] - matrix[i][j-1]) >= 50 && abs(matrix[i][j] - matrix[i][j+1]) >= 50){
				num++;
			}
		}
	}
	cout << num << endl;

	return 0;
}