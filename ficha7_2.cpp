#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	char frase1[100];
	char frase2[100];
	cout << "Introduza uma frase: ";
	gets(frase1);
	cout<<"Introduza a segunda frase: ";
	gets(frase2);
	strcat(frase1,frase2);
	cout<<frase1;
}
