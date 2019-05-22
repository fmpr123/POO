#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	int pnum=0;
	int snum=0;
	int res=0;
	do{
		cout<<"Insira um numero inteiro: ";
		cin>>pnum;
		cout<<"Insira outro numero inteiro: ";
		cin>>snum;
		res=pnum*snum;
		cout<<pnum<<" * "<<snum<<" = "<<res<<"\n";
	}while(res>=10 && res<=1000);
}
