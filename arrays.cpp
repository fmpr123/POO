#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

//Array unidimensional
main(){
	int v[4]={12,31,8,45};
	int i;
	
	for(i=0;i<4;i++){
		cout << "O valor do indice " <<i<< " e: "<<v[i]<<"\n";
	}
}

//Array bidimensional
qwerty(){
	int v[2][3]={1,2,3,4,5,6};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout <<"O valor do indice "<<i<<" , "<<j<<" e: "<<v[i][j]<<"\n";
		}
	}
}
