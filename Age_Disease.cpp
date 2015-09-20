#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n = 0, grp1 = 0, grp2 = 0, grp3 = 0, grp4 = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		int element = 0;
		cin >> element;
		
		if (element <= 18){
			grp1++;
		}
		if (element > 18 and element <= 35){
			grp2++;
		}
		if (element > 35 and element <= 60){
			grp3++;
		}
		if (element > 60){
			grp4++;
		}
	}
	cout << "1-18: " << fixed << setprecision(2) << grp1*1.0*100/n << '%' << endl;
	cout << "19-35: " << fixed << setprecision(2) << grp2*1.0*100/n << '%' << endl;
	cout << "36-60: " << fixed << setprecision(2) << grp3*1.0*100/n << '%' << endl;
	cout << "60-: " << fixed << setprecision(2) << grp4*1.0*100/n << '%' << endl;
	return 0;
}