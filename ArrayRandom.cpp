#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

main(){
	int v[5];
	int i;
	//srand gera numeros randoms sempre que o programa corre
	srand((unsigned)time(NULL));
	for (i=0;i<5;i++){
		//Insere numeros randoms no array
		v[i]= rand() % 30;
		cout <<" | "<< v[i]<<" | ";
	}
}
