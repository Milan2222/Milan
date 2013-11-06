//  Программа циклического сдвига значений переменных a, b, c, d
//  c использование поразрядных логических операций 

#include <iostream.h>
int main()
{
	int a,b,c,d;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	cout<<"Input c-->";
	cin>>c;
	cout<<"Input d-->";
	cin>>d;
	a^=b^c^d;  
    b^=a^c^d;  
    c^=a^b^d;  
	d^=a^b^c;  
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	cout<<"Result c="<<c<<endl;
	cout<<"Result d="<<d<<endl;
	return 0;
}