#include<bits/stdc++.h>

using namespace std;

class Geeks
{
	public  :
	void func(int x)
	{
		cout<<"\nValue of x : "<<x;
	}
	
	void func(double x)
	{
		cout<<"\nValue of x  : "<<x;
	}
	
	void func(int x , int y)
	{
		cout<<"\nValue of x  : "<<x;
		cout<<"\nValue of y : "<<y;
	}
};


int main()
{
	Geeks one;
	one.func(1);
	one.func(1,2);
	one.func(12.3);
	cout<<"\n";
	system("pause");
	return 0;
}