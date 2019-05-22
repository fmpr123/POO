#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	char palavra1[100];
	char palavra2[100];
	cout<<"Digite a primeira palavra: ";
	gets(palavra1);
	cout<<"Digite a segunda palavra: ";
	gets(palavra2);
	
	if(strcmp(palavra1,palavra2)){ //compara se são iguais
		if(strlen(palavra1)==strlen(palavra2)){
		cout << "As palavra teem o mesmo tamanho."; //strcmp ve primeiro se forem diferentes
	}else if(strlen(palavra1)>strlen(palavra2)){
		cout<<"A palavra: "<<palavra1<<" e maior que a palavra: "<<palavra2;
	}else{
		cout<<"A palavra: "<<palavra2<<" e maior que a palavra: "<<palavra1;	
	}
	}else{
		cout<<"As palavras sao iguais";
	
	}
}
	
