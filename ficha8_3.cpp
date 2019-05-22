#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	char letra;
	cout<<"Digite uma letra: ";
	cin>>letra;
	if(isupper(letra)){
		cout<<"A letra "<<letra<<" e maiuscula";
	}else{
		cout<<"A letra "<<letra<<" e minuscula";
	}
}
