#include<bits/stdc++.h>
using namespace std;

class Base 
{
	
	private :
	double radius;
	
	public  :
	int count=0;
	string name;
	
	// mmeber function 
	void printname()
	{
		cout<<"\nName : "<<name;
	}
	void getname();
	Base()
	{
		cout<<"\nDefulat constuctor called : ";
		count=1;
	}
	Base(int x)
	{
		cout<<"\nvalue of x : ";
		cin>>x;
	}
	~Base()
	{
		cout<<"\nCalling the destructor ";
		cin.get();
	}
};

void Base :: getname()
{
	cout<<"\nEnter name : ";
	cin>>name;
}
int main()
{
	Base one;
	one.getname();
	one.printname();
	cout<<"\n";
	Base two(2);
	system("pause");
	
	return 0;
}