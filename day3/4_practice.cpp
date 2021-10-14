#include<bits/stdc++.h>

using namespace std;

int main()
{
	string person = "India is an awesome country ";
	char *pointer;
	pointer = &person[0];
	cout<<pointer<<"\n";
	
	const char *pointer2 = person.c_str();
	cout<<pointer2<<"\n";
	
	char c[person.length()];
	for(int i=0;i<person.length();i++)
	{
		c[i] = person[i];
	}
	for(int i=0;i<person.length();i++)
	{
		cout<<c[i];
	}
	cout<<"\n";
	system("pause");
	return 0;
	
}