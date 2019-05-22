#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
	int c1;
	int c2;
	int total;
	cout << "Introduza o cateto: ";
	cin >> c1;
	cout << "Introduza outro cateto: ";
	cin >> c2;
	total = pow(c1,2) + pow(c2,2);
	cout << sqrt(total);
}

//pow(valor,elevado)
