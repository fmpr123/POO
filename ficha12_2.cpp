#include <iostream>
#include <stdio.h>
using namespace std;

class aluno{
	public:
		char nome[40];
		int numero;
		float nota1,nota2,notafinal;
}p1;

main(){
	cout<<"Introduza nome: ";
	cin>>p1.nome;
	cout<<"Introduza o numero: ";
	cin>>p1.numero;
	cout<<"Introduza a nota do primeiro teste: ";
	cin>>p1.nota1;
	cout<<"Introduza a nota do segundo teste: ";
	cin>>p1.nota2;
	p1.notafinal=(p1.nota1+p1.nota2)/2;
	system("cls");
	
	cout<<"Nome do aluno: "<<p1.nome;
	cout<<"\nNumero do aluno: "<<p1.numero;
	cout<<"\nNota final: "<<p1.notafinal;
}
