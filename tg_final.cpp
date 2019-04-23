#include <iostream>
#include <stdio.h>
using namespace std;

main(){
	//Declaração de variáveis
	int pag=0,euro=0,i=0;
	float valor,troco;
	
	//Menu
	cout<<"CAIXA DE PAGAMENTO\n"
	<<"So sao aceites notas <5, 10, 20, 50, 100, 200 e 500\n"
	<<"Introduza um valor: ";
	cin>>valor;
	cout<<"Introduza o pagamento: ";
	cin>>pag;
	//Ciclo que verifica o valor de pagamento
	while(pag!=5 and pag!=10 and pag!=20 and pag!=50 and pag!=100 and pag!=200 and pag!=500){
		cout<<"Pagamento invalido, insira novamente: ";
		cin>>pag;
	}

	troco=pag-valor;
	cout<<"Troco: "<< pag-valor<<"\n";
	
	cout<<"Moedas devolvidas: \n";
	//2 euros
	for(i=2;i<=troco;i+=2){
		euro+=1;
	}
	cout<<euro<<" moedas de 2 euros.\n";
	//1 euro
	troco=troco-(2*euro);
	euro=0;
	for(i=1;i<=troco;i+=1){
	euro+=1;
	}
	cout<<euro<<" moedas de 1 euro.";
	
	
}
