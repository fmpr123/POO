#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	char carater;
	char esc = 's';
	while(esc == 's'){
	cout<<"Introduza um carater: ";
	cin>>carater;
	if(isalpha(carater)){
		cout<<"Letra\n";
	}else if(isdigit(carater)){
		cout<<"Numero\n";
	}else if(ispunct(carater)){
		cout<<"Simbolo\n";
	}
	cout<<"Inserir outro carater? (s/n)";
	cin>>esc;
	system("CLS");
	}
	
}
