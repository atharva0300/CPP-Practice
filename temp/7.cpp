// Chopsticks
// TACHSTCK

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll n,d;
	cin>>n>>d;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,  arr+n);
	ll count=0;
	ll i=0;
	for(int i=0;i<n-1;)
	{
		if(arr[i+1]-arr[i]<=d)
		{
			count++;
			i = i+2;
		}
		else
		{
			i++;
		}
	}
	cout<<count<<"\n";
	system("pause");
	return 0;
}