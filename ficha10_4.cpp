#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

main(){
	char fa[10],fb[10],ft[20];
	cout<<"Insira a primeira fruta: ";
	cin>>fa;
	cout<<"Insira a segunda fruta: ";
	cin>>fb;
	strcpy(ft,fa);
	strcat(ft," ");
	strcat(ft,fb);
	cout<<ft;
}
