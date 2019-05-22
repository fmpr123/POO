#include <stdio.h>
#include <iostream>
using namespace std;


main(){
	int opc;
	cout<<"Hipotese de compra de senhas: \n(1) Pequeno Almoco\n(2) Almoco\n(3) Lanche\n(4) Jantar\nEscolha a senha que deseja comprar: ";
	cin>>opc;
	if(opc<1 or opc>4){
		do{
		cout<<opc<<" nao e uma senha valida, escolha novamente: ";
		cin>>opc;
	}while(opc<1 or opc>4);
	}
	switch (opc){
		case 1:
			cout<<"\nComprou uma senha para o pequeno almoco";
			break;
		case 2:
			cout<<"\nComprou uma senha para o almoco";
			break;
		case 3:
			cout<<"\nComprou uma senha para o lanche";
			break;
		case 4:
			cout<<"\nComprou uma senha para o jantar";
			break;
	}
}
