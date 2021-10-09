#include<bits/stdc++.h>

using namespace std;

class Base 
{
	
};


class Derived : public Base
{
	int a;
};
class D : virtual public Base 
{
	char a;
};
int main()
{
	Base a , b;
	cout<<"\nSize of the Base class : "<<sizeof(Base);
	if (&a==&b)
	{
		cout<<"\nnot possible";
	}
	else 
	{
		cout<<"\nThat normal ";
	}
	Base *p1 = new Base ;
	Base *p2 = new Base ;
	if(p1==p2)
	{
		cout<<"\nNot possible";
	}
	else 
	{
		cout<<"\nThat s normal ";
	}
	Derived d;
	cout<<"\nSize of derived class : "<<sizeof(Derived);
	cout<<"\nSize of D class : "<<sizeof(D);
	cout<<"\n";
	system("pause");
	return 0;
}