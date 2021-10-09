#include<bits/stdc++.h>

using namespace std;


class B;

class A
{
	public : 
	void showB(B&);
};

class B
{
	private : 
	int b;
	
	public : 
	B()
	{
		b =0;
	}
	friend void A::showB(B& x);
};

void A::showB(B& x)
{
	// Since showB() is a friend of B, it can 
	// access private members of B 
	std::cout<<"B :: b  =  "<<x.b;
}
int main()
{
	A a;
	B x;
	a.showB(x);
	system("pause");
	return 0;
}