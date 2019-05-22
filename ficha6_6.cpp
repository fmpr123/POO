#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	int soma=0;
	int valor=0;
	int n=0;
	int res=0;
	while(soma<500&&valor<=100){
		cout<<"Insira um valor: ";
		cin>>valor;
		soma+=valor;
		n++;
	}
	res=soma/n;
	cout<<"Media: "<<res;
}
