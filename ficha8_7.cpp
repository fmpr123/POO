#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	int pnum, snum, nmaior, nmenor;
	
	cout<<"Introduza um numero: ";
	cin >> pnum;
	cout<<"Introduza outro numero: ";
	cin >> snum;
	
	if(pnum>snum){
		nmaior=pnum;
		nmenor=snum;
	}else{
		nmaior=snum;
		nmenor=pnum;
	}
	
	for(int i=nmenor;i<=nmaior;i++){
		cout<<"\n"<<i;
	}
}
