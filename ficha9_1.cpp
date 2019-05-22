#include <stdlib.h>
#include <iostream>
using namespace std;

int inteiros(int a, int b){
	return (a/b);
}

int resto(int a, int b){
	return (a%b);
}

main(){
	int x,y;
	cout<<"Introduza o valor de x: ";
	cin>>x;
	cout<<"Introduza o valor de y: ";
	cin>>y;
	cout<<"Resultado da divisao: "<<inteiros(x,y)<<"\n";
	cout<<"O resto da divisao inteira: "<<resto(x,y);
}


