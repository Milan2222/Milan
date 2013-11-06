#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	c=a; //исходное значение а запомнили в с
	a=b; //в а поместили значение b
	b=c; //в b помещаем, хранящееся в с начальное значение а
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	return 0;

}
