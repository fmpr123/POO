#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;


main(){
	int valor=0;
	int div=0;
	cout<<"Introduza um numero: ";
	cin>>valor;
	div=valor%2;
	if(div==0){
		while(valor>0){
			cout<<valor<<"\n";
			valor-=2;
		}
	}else{
		valor-=1;
		while(valor>0){
			cout<<valor<<"\n";
			valor-=2;
		}
	}
}
