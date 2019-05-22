#include <iostream>
#include <stdio.h>
using namespace std;

class aluno{
	private:
		float notas;
	public:
		char nome[40];
		int numero;
		void muda_nota(float v){notas=v;}
		void nota(){cout<<"A nota e: "<<notas<<"\n";}
};

void nota_aluno(aluno a){
	a.nota();
	a.muda_nota(9.5);
	a.nota();
}

main(){
	aluno a1;
	a1.muda_nota(9.35);
	nota_aluno(a1);
	cout<<"E capaz de nao ter resultado essa mudanca!\n";
	a1.nota();
}
