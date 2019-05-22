#include <iostream>
#include <stdio.h>
using namespace std;

main(){
	int nota;
	int i=1;
	int total=0;
	cout << "WHILE\n";
	while(i<=5){
		total = i*2;
		cout << " " << total;
		i++;
	}
	
	total = 0;
	i = 0;
	cout << "\nFOR\n";
	for(i=1;i<=5;i++){
		total=i*2;
		cout << " " << total;
	}
	
	total = 0;
	i = 0;
	cout << "\nSWITCH\n";
	
	cin >> nota;
	
	switch(nota){
		case 1:
			total = 1*2;
			cout << total;
			break;
		case 2:
			total = 2*2;
			cout << total;
			break;
		case 3:
			total = 3*2;
			cout << total;
			break;
		case 4:
			total = 4*2;
			cout << total;
			break;
		case 5:
			total = 5*2;
			cout << total;
			break;
	}
}
