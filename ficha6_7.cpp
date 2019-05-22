#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	
	int escolha=0;
	cout<<"Menu de opcoes:\n1 - Executar o programa Calculadora\n2 - Converter graus centigrados/fahrenheit\n3 - Converter metros/quilometros\n4 - Sair\n";
	cin >> escolha;
	
	switch (escolha){
		case 1:
		cout<<"Calculadora: a executar...";
		break;
		case 2:
		cout<<"Conversao de temperaturas";
		break;
		case 3:
		cout<<"Conversao de distancias";
		break;
		case 4:
		cout<<"A terminar programa...";
		break;
		default: cout<<"Numero invalido!";
	}
}
