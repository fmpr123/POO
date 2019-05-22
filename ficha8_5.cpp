#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int num,i;
	cout<<"Introduza um numero: ";
	cin>>num;
	cout<<"Decrescente: \n";
	for(i=num;i>=0;i--){
		cout<<"\n"<<i;
	}
	cout<<"\n\nCrescente: \n";
	for(i=0;i<=num;i++){
		cout<<"\n"<<i;
	}
}
