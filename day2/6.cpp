#include<bits/stdc++.h>

using namespace std;

class Base
{
	private  :
	int a , b;
	
	public : 
	void set(int x  ,int y)
	{
		a = x;
		b = y;
	}
	void display()
	{
		cout<<"\na : "<<a;
		cout<<"\nb : "<<b;
	}
};

int main()
{
	Base one;
	one.set(1,2);
	one.display();
	cout<<"\n";
	
	system("pause");
	return 0;
}