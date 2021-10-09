#include<bits/stdc++.h>

using namespace std;


class Base
{
	public : 
	Base(const char* str = "\0")
	{
		cout<<"\nConstructor called\n";
	}
	Base(const Base &b)
	{
		cout<<"\nCopy constructor called ";
	}
	
};

int main()
{
	Base ob = "copy me";
	Base t(ob);
	cout<<"\n";
	system("pause");
	return 0;
}