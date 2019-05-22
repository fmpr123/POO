#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
	int p;
	int s;
	char op;
	cout << "Introduza o primeiro numero: ";
	cin >> p;
	cout << "Introduza o segundo numero: ";
	cin >> s;
	cout << "Introduza a operacao a realizar(+,-,*,/): ";
	cin >> op;
	
	switch(op){
		case '+':
			cout << p<<"+"<<s<<"="<<p+s;
			break;
		case '-':
			cout << p<<"-"<<s<<"="<<p-s;
			break;
		case '*':
			cout << p<<"*"<<s<<"="<<p*s;
			break;
		case '/':
			cout << p<<"/"<<s<<"="<<p/s;
			break;
		default: cout <<"Numero invalido";
	}
}

