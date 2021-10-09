#include<bits/stdc++.h>

using namespace std;

class Base
{
	public : 
	virtual void print()
	{
		cout<<"\nprint base class";
	}
	
	void show()
	{
		cout<<"\nShow base class";
	}
};

class derived : public Base 
{
	public : 
	void print()
	{
		cout<<"\nPrint derived class";
	}
	void show()
	{
		cout<<"\nShow derived class";
	}
};

int main()
{
	Base *bptr;
	derived d;
	bptr = &d;
	
	bptr->print();
	bptr->show();
	cout<<"\n";
	system("pause");
	return 0;
}