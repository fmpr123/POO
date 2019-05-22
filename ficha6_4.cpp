#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	int vetor[5];
	int valor=0;
	int i=0;
	
	for(i=0;i<5;i++){
		cout<<"Indique um valor para o vetor ["<<i<<"]: ";
		cin>>valor;
		vetor[i]=valor;
	}
	cout<<"\n";
	for(i=4;i>=0;i--){
		cout<<"["<<i<<"]="<<vetor[i]<<"\n";
	}
}
