#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	char pass[10];
	cout<<"Introduza uma password: ";
	gets(pass);
	if(strcmp(pass,"arroz")){
		cout << "Incorreto";
		cout<<"Dica: A passord tem 5 letras e comeca por a";
	}else{
		cout<<"Correto";
	}
}
