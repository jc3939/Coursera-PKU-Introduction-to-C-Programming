#include <iostream>
using namespace std;

int trees[10001] = {0};
int main(){
	int L = 0, M = 0;
	int start = 0, end = 0;
	cin >> L >> M;
	for (int i = 0; i <= L; i++){
		trees[i] = 1;
	}
	for (int i = 0; i < M; i++){
		cin >> start >> end;
		for (int j = start; j <= end; j++){
			trees[j] = 0;
		}
	}

	int count = 0;
	for (int i = 0; i <= L; i++){
		count += trees[i];
	}
	cout << count;
	return 0;
}