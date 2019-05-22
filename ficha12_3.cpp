#include <iostream>
#include <stdio.h>
using namespace std;

class aluno{
	private:
		float nota1,nota2;
	public:
		char nome[40];
		int numero;
		void set_nota1(float i){
			nota1=i;
		}
		void set_nota2(float j){
			nota2=j;
		}
		float get_nota1(){
			return nota1;
		}
		float get_nota2(){
			return nota2;
		}
		float notafinal(){
			return (nota1+nota2)/2;
		}
		
}p1;

main(){
	cout<<"Introduza nome: ";
	gets(p1.nome);
	cout<<"Introduza o numero: ";
	cin>>p1.numero;
	cout<<"Introduza a nota do primeiro teste: ";
	float n; cin>>n;
	p1.set_nota1(n);
	cout<<"Introduza a nota do segundo teste: ";
	float m; cin>>m;
	p1.set_nota2(m);
	system("cls");
	
	cout<<"Nome do aluno: "<<p1.nome;
	cout<<"\nNumero do aluno: "<<p1.numero;
	cout<<"\nNota final: "<<p1.notafinal();
}
