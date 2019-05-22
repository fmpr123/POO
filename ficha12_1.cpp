#include <iostream>
#include <stdio.h>
using namespace std;

class aluno{
	public:
		char nome[40];
		int numero;
		float nota_esperada;	
}p1;

main(){
	cout<<"Introduza nome: ";
	cin>>p1.nome;
	cout<<"Introduza o numero: ";
	cin>>p1.numero;
	cout<<"Introduza a nota esperada: ";
	cin>>p1.nota_esperada;
	system("cls");
	
	cout<<"Nome do aluno: "<<p1.nome;
	cout<<"\nNumero do aluno: "<<p1.numero;
	cout<<"\nNota esperada: "<<p1.nota_esperada;
}
