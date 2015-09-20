#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	
	char line[500];

	cin.getline(line, 500);

	int i = 0;
	int tempLength = 0;
	int wordStart = 0;
	int maxStart = 0;
	int flag = 0;

	while(line[i] != '.'){
		if (line[i] == ' '){
			if (tempLength < i - wordStart){
				tempLength = i - wordStart;
				maxStart = wordStart;
			}
			flag = 0;
		}
		else if (flag == 0){
			flag = 1;
			wordStart = i;
		}

		i++;
	}
	if (tempLength < i - wordStart){
		tempLength = i - wordStart;
		maxStart = wordStart;
	}

	for(int i = maxStart; i < maxStart+tempLength; i++){
		cout << line[i];
	}
	cout << endl;
	return 0;
}