#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
	int es;
	cout << "PRODUTOS DA SEMANA \n";
	cout << "1 - Cereais Nestun, 2 - Sumo Tropical \n3 - Geleia Morango, 4 - Massa Italiana \n5 - Arroz Amarelo, 6 - Leite de Soja \n7 - Coca Cola Zero, 8 - Couve de Bruxelas \n";
	cout << "Introduza o numero do produto: ";
	cin >> es;
	
	switch(es){
		case 1:
			cout << "Desconto = 20%";
			break;
		case 2:
			cout << "Desconto = 15%";
			break;
		case 3:
			cout << "Desconto = 20%";
			break;
		case 4:
			cout << "Desconto = 10%";
			break;
		case 5:
			cout << "Desconto = 10%";
			break;
		case 6:
			cout << "Desconto = 20%";
			break;
		case 7:
			cout << "Desconto = 15%";
			break;
		case 8:
			cout << "Desconto = 5%";
			break;
	}
}
