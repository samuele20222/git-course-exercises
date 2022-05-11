/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int p;
	int s;

	cout << "inserisci due numeri" << endl;
	cin >> p >> s;

	char e = 's';

	while(e=='s'){
		char c;
		cout << "+|-|-/|*" << endl;
		cin >> c;
		switch(c){
			case '+':
				cout << "SUM: " << p+s << endl;
				break;
			case '-':
				cout << "DIFF: " <<p-s << endl;
				break;
			case '*':
				cout << "PROD: " << p*s << endl;
				break;
			case '/':
				cout << "DIV: " << p/s << endl;
				break;
			}
		cout << "continuare? s/n" << endl;
		cin >> e;
	}
}
