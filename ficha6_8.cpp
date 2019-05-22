#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	int preco=0;
	int quantidade=0;
	int res=0;
	int desconto=0;
	
	cout<<"Insira o preco a pagar: ";
	cin>>preco;
	cout<<"Insira a quantidade: ";
	cin>>quantidade;
	
	if(quantidade<500){
		desconto = preco*quantidade;
		res = desconto;
	}else if(quantidade>=500 && quantidade<=1000){
		desconto = (preco*quantidade) * 0.05;
		res = (preco*quantidade)-desconto;
	}else if(quantidade>1000){
		desconto = (preco*quantidade) * 0.08;
		res = (preco*quantidade)-desconto;
	}
	cout<<res;
}
