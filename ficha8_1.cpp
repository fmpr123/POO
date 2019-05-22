#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int num=0;
	cout<<"Introduza um numero entre 1 e 10: ";
	cin>>num;
	if(num>=1 and num<=10){
		cout<<"O numero "<<num<<" e valido!\n";
	}else{
		cout<<"O numero "<<num<<" e invalido!\n";
	}
}
