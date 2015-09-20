#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int h = 0, r = 0;

	cin >> h >> r;
	const double Pi = 3.14159; int demand = 20000;
	double volume = 0.0;
	int result = 0;
	volume = Pi * r * r * h;
	result = ceil(demand / volume);
	cout << result << endl;
	
	return 0;
}