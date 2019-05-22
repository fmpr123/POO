#include <iostream>
#include <stdio.h>
using namespace std;

main(){
	int a[6];
	int *n;
	cout<<"Insira 6 notas:\n";
	for(int i=0;i<=5;i++){
		cout<<""<<i<<" nota: ";
		cin>>a[i];
	}
	for(int i=0;i<=5;i++){
		a[i]=a[i]+1;
		cout<<" "<<*n;
	}
}
