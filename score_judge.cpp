#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int score = 0;
	cin >> score;
	
	if (score <= 100 and score >= 95){
		cout << 1 << endl;
	}
	if (score < 95 and score >= 90){
		cout << 2 << endl;
	}
	if (score < 90 and score >= 85){
		cout << 3 << endl;
	}
	if (score < 85 and score >= 80){
		cout << 4 << endl;
	}
	if (score < 80 and score >= 70){
		cout << 5 << endl;
	}
	if (score < 70 and score >= 60){
		cout << 6 << endl;
	}
	if (score < 60){
		cout << 7 << endl;
	}
	return 0;
}