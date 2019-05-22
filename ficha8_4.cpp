#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int num;
	cout<<"Introduza um numero entre 0 e 3: ";
	cin>>num;
	switch(num){
		case 0:
			cout<<"Zero";
			break;
		case 1:
			cout<<"Um";
			break;
		case 2:
			cout<<"Dois";
			break;
		case 3:
			cout<<"Tres";
			break;
		default:
			cout<<"Numero invalido.";
	}
}
