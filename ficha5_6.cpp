#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
	int a;
	int b;
	cout << "Insira o valor de a: ";
	cin >> a;
	cout << "Insira o valor de b: ";
	cin >> b;
	
	if(a>b){
		cout << a << " e maior que " << b;
	}else{
		cout << b << " e maior que " << a;
	}
}
