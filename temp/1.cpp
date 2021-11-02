// Ciel and the receip t 
// CIELRCPT
#include<bits/stdc++.h>
# define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int a;
		cin>>a;
		int i = 11;
		while(int(pow(2,i))>a)
		{
			i--;
		}
		while(a>0)
		{
			if(a>=pow(2,i))
			{
			    a = a-pow(2,i);	
				count++;
			}
			if(pow(2,i)>a)
			{
				i--;
			}
		}
		cout<<count;
		cout<<"\n";
	}
	system("pause");
	return 0;
}