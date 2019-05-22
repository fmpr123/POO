#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int num;
	cout<<"Insira um numero entre 1 e 5: ";
	cin>>num;
	while(num<1 or num>5){
		cout<<"Numero invalido\n"
		<<"Insira novamente: ";
		cin>>num;
	}
	cout<<"Numero valido: "<<num;
} 
