#include<bits/stdc++.h>

using namespace std;


class Person
{
	private : 
	~Person()
	{
		cout<<"\nDestructor called\n";
	}
	
	public :
	Person()
	{
		cout<<"\nConstructor is callle\n";
	}
	friend void destructorPerson(Person*);
	
};

void destructorPerson(Person* ptr)
{
	delete ptr;
}

int main()
{
	Person *p;
	p = new Person;
	Person *t = (Person*)malloc(sizeof(Person));
	destructorPerson(p);
	system("pause");
	return 0;
}