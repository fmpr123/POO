#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class aluno{
public:
	static char escola[25];
	char nome [20];
	
aluno(){
	strcpy(nome,"Defina nome");
	cout<<endl<<"Criado um objecto aluno."<<endl;
}

void setnome(aluno a){
	
}

~aluno(){
cout<<endl<<"Destruido um objecto aluno"<<endl;
}

}
