#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int n1,n2,n3;
	float mediabp,mediabd,
	media_p1,media_p2,media_p3;
	cout<<"Notas de Bases de Programação\n";
	cout<<"Nota do 1 periodo: ";
	cin>>n1;
	media_p1+=n1;
	cout<<"Nota do 2 periodo: ";
	cin>>n2;
	media_p2+=n2;
	cout<<"Nota do 3 periodo: ";
	cin>>n3;
	media_p3+=n3;
	mediabp=(n1+n2+n3)/3;
	system("cls");
	cout<<"Notas de Bases de Dados\n";
	cout<<"Nota do 1 periodo: ";
	cin>>n1;
	media_p1+=n1;
	cout<<"Nota do 2 periodo: ";
	cin>>n2;
	media_p2+=n2;
	cout<<"Nota do 3 periodo: ";
	cin>>n3;
	media_p3+=n3;
	mediabd=(n1+n2+n3)/3;
	system("cls");
	cout<<"Media por disciplina:\n";
	cout<<"Disciplina1= "<<mediabp;
	cout<<"\nDisciplina2= "<<mediabd;
	media_p1=media_p1/2;
	media_p2=media_p2/2;
	media_p3=media_p3/2;
	cout<<"\nMedia por periodo: \n";
	cout<<"Periodo 1: "<<media_p1;
	cout<<"\nPeriodo 2: "<<media_p2;
	cout<<"\nPeriodo 3: "<<media_p3;
}
