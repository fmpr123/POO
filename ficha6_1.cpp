#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
using namespace std;

main(){
	int num=0;
	int res=0;
	
	cout<<"Insira um numero entre 1 e 15: ";
	cin>>num;
	do{
		cout<<"n = "<<num<<"\n";
		res+=num;
		num+=1;
	}while(num<=15);
	cout<<"Soma: "<<res;
}
