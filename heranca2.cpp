#include <iostream>
#include <stdio.h>
using namespace std;

class base {
	private:
		int priv ;
	protected:
		int prot ;
	public:
		int pub ;
	void setpriv (int i) {priv = i;}
		int getpriv () {return priv ;} };

class derivada1 : public base {
	public:
		void setprot (int i) {prot = i ;}
			int getprot () {return prot ;} } ;
class derivada2 : protected base
{
	public:
		void setprot (int i) {prot = i ;}
		int getprot () {return prot ;}
		void setpub (int i) {pub = i ;}
		int getpub () {return pub ;} } ;

main ()
{
	cout << "classe derivada1 : public base \n";
	derivada1 d1 ;
	d1.setpriv(11); d1.setprot(12);
	d1.pub = 13 ;
	cout << d1.getpriv() << '\n';
	cout << d1.getprot() << '\n';
	cout << d1.pub << '\n';
	cout << "classe derivada2 : protected base \n";
	derivada2 d2 ;
	d2.setprot(22); d2.setpub (23);
	cout << d2.getprot () << '\n';
	cout << d2.getpub () << '\n';
}
