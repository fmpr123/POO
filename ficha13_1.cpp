#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int x=3,y=3,*p,*f;
	p=&x; f=&y;
	cout<<"Normal: \n";
	cout<<x+y<<"\n";
	cout<<"Ponteiros: \n";
	cout<<*p+*f;
}
