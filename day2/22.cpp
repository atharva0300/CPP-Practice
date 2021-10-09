#include<bits/stdc++.h>

using namespace std;

int i;
class Base
{
	public : 
	~Base()
	{
		i =10;
	}
};

int foo()
{
	i =3;
	{
		Base ob;
	}
	return i;
}
int main()
{
	cout<<"\ni : "<<foo()<<"\n";
	system("pause");
	return 0;
}