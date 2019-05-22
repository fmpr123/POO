#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int num1,num2,num3;
	
	cout<<"Insira um numero: ";
	cin>>num1;
	cout<<"Insira outro numero: ";
	cin>>num2;
	cout<<"Insira outro numero: ";
	cin>>num3;
	
	if(num1>num2 and num1>num3){
		cout<<"O numero "<<num1<<" e o maior.";
	}else if(num2>num1 and num2>num3){
		cout<<"O numero "<<num2<<" e o maior.";
	}else{
		cout<<"O numero "<<num3<<" e o maior.";
	}
}
