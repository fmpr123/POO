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
		pnum=nmaior;
		snum=nmenor;
	}else{
		snum=nmaior;
		pnum=nmenor;
	}
	
	for(int i=nmenor;i<=nmaior;i++){
		cout<<"\n"<<i;
	}
}
