#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	a+=b;	//в а сумма начальных значений а и b
    b=a-b;	//в b поместили начальное значение а
    a-=b;	//в a помещаем начальное значение b
	cout<<"Result a="<<a<<endl;
	cout<<"Result b="<<b<<endl;
	return 0;

}
