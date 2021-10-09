#include<bits/stdc++.h>

using namespace std;

class A
{
	int a;
	public : 
	A()
	{
		a=0;
	}
	// global friend function 
	friend void showA(A&);
};

void showA(A& x)
{
	cout<<"A :: a = "<<x.a;
}
int main()
{	
	A a;
	showA(a);
	
	system("pause");
	return 0;
}