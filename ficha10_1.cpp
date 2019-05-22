#include <iostream>
using namespace std;

main(){
	char t[100];
	char *p=t;
	cout<<"Inverter ordem\nInsira uma palavra: ";
	cin>>t;
	if(*p=='\0'){
		cout<<"\0";
	}
	cout<<"\n";
	while(*p!='\0'){
		cout<<*p++;
	}
	*p--;
	cout<<" - ";
	while(*p){
		cout<<*p--;
	}
	cout<<*p--<<"\n";
}
