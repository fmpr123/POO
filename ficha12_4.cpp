#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

class aluno{
	public:
		char nome[40];
		int numero;
		
		float nota1(); //prototipo
		float nota2(); //prototipo
		
		float notafinal(){
			return (nota1()+nota2())/2;
		}
		void mostradados();	
}p1;

main(){
	srand((unsigned)time(NULL));
	cout<<"Introduza nome: ";
	gets(p1.nome);
	cout<<"Introduza o numero: ";
	cin>>p1.numero;
	p1.nota1();
	p1.nota2();
	system("cls");
	p1.mostradados();
}

float aluno::nota1(){
	float n;n=rand()%1501;
	cout<<n<<"\n";return n/100+5;
}
float aluno::nota2(){
	float m;m=rand()%1501;
	cout<<m<<"\n";return m/100+5;
}
void aluno::mostradados(){
	cout<<"Nome: "<<nome;
	cout<<"\nNumero: "<<numero;
	cout<<"\nNota: "<<notafinal();
}
