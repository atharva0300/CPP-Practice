#include<bits/stdc++.h>

using namespace std;

int main()
{
	// delimininator 
	char s[20];
	cout<<"\nEnter name : ";
	cin.getline(s, 20);
	// gets character till 20 places only 
	cout<<"\nYour name is : "<<s<<"\n";
	// print character till 20 spaces only 
	
	//converting string to character array 
	char c[20];
	for(int i=0;i<20;i++)
	{
		c[i] = s[i];
	}
	for(int i=0;i<20;i++)
	{
		cout<<c[i]<<"\n";
	}
	
	char c2[20];
	string person = "atharva the awesome guy is here";
	int n = person.length();
	strcpy(c2 , person.c_str());
	for(int i=0;i<n;i++)
	{
		cout<<c2[i];
	}
	cout<<"\n";
	
	//using pointers 
	// the most efficient method 
	char *pointer;
	pointer = &person[0];
	cout<<pointer<<"\n";
	
	// using char pointer for a string usign c_str()
	const char *pointer2 = person.c_str();
	cout<<pointer2<<"\n";
	system("pause");
	return 0;
}