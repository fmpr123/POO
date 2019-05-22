#include <iostream>
#include <stdio.h>
using namespace std;

class rectang{
	float comp,larg;
	public:
		void setdados(float cp,float lg)
			{comp=cp;larg=lg;}
		float getarea(){return comp*larg;}
};

class cubo:public rectang{
	float altura;
	public:
		void setaltura(float a){altura=a;}
		float getaltura(){return altura;}
}t1;

main(){
//	cubo t1;
	t1.setaltura(3);
	t1.setdados(4,5);
	cout<<"Volume= ";
	cout<<t1.getaltura()*t1.getarea();
}
