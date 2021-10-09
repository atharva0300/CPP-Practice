#include<bits/stdc++.h>

using namespace std;

class A
{
	private : 
	int a;
	public : 
	A()
	{
		a = 0;
	}
	friend class B;
};

class B
{
	private : 
	int b;
	
	public : 
	void showA(A& x)
	{
		// Since B is friend of A, it can access 
		// private members of A 
		cout<<"A::a : "<<x.a;
	}
};
int main()
{
	A a;
	B b;
	b.showA(a);
	system("pause");
	return 0;
}