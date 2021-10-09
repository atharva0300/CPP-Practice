#include<bits/stdc++.h>
using namespace std;


class A 
{
	int x;
	public  :
	A()
	{
		cout<<"\nA's constructor is called : ";
	}
};

class B 
{
	static A person;
	public : 
	B()
	{
		cout<<"\nB's constructor is called : ";
	}
	static A getA()
	{
		return person;
	}
};

A B::person;
int main()
{
	A person = B::getA();
	cout<<"\n";
	system("pause");
	return 0;
}