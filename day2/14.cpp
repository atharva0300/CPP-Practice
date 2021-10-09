#include<bits/stdc++.h>

using namespace std;

class Construct 
{
	public : 
	int a , b;
	// defulat constructor 
	Construct()
	{
		a = 10;
		b = 20;
	}
	Construct(int x)
	{
		a = x;
	}
};
int main()
{
	Construct c;
	cout<<"\na : "<<c.a;
	cout<<"\nb : "<<c.b;
	Construct d = Construct(12);
	cout<<"\na : "<<d.a;
	cout<<"\n";
	system("pause");
	return 0;
}