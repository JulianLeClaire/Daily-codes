#include<iostream>
using namespace std;


void TwoLetters(char letter1, char letter2);

int main() {
	
	char l1, l2;
	cout << "enter two letters" << endl;
	cin >> l1;
	cin >> l2;
		
	
	TwoLetters(l1, l2);
}


void TwoLetters(char letter1, char letter2) {
	cout << letter1 << letter2 << endl;
}

#include <iostream>
using namespace std;


void MiniCalc(int x, int y);


int main() {
	int x, y;
	cout << "input two numbers" << endl;
	cin >>x;
	cin >> y;

	MiniCalc(x, y);
}


void MiniCalc(int x, int y) {
	cout << x + y << endl;
	cout <<x - y<<endl;
	cout << x * y << endl;
	cout << x / y << endl;
}
