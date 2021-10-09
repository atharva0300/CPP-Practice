#include<bits/stdc++.h>

using namespace std;

class String
{
	private : 
	char *s;
	int size ;
	
	public : 
	String(char *);
	~String();
};

String::String(char *c)
{
	size = strlen(c);
	s = new char[size+1];
	strcpy(s,c);
}

String::~String()
{
	delete[] s;
}
	
	
int main()
{

	system("pause");
	return 0;
}