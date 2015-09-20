#include <iostream>
using namespace std;

int main(){
	int x = 0, y = 0;
	char op = ' ';

	cin >> x >> y >> op;

	if ( y == 0 && op == '/'){
		cout << "Divided by zero!" << endl;
		return 0;
	}

	switch(op){
		case '+': cout << x + y << endl; break;
		case '-': cout << x - y << endl; break;
		case '*': cout << x * y << endl; break;
		case '/': cout << x / y << endl; break;
		default: cout << "Invalid operator!" << endl; break;
	}
	return 0;
}