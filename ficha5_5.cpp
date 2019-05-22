#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
	int nota1;
	int nota2;
	int media;
	cout << "Introduza a primeira nota: ";
	cin >> nota1;
	cout << "Introduza a segunda nota: ";
	cin >> nota2;
	media = (nota1+nota2)/2;
	if(media>=9.5){
		cout << "Aprovado. Com media de: " << media;
	}else{
		cout << "Reprovado. Com media de: " << media;
	}
}
