// Maximum weight difference 
// MAXDIFF

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{	
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll item[a];
		ll sum =0;
		for(ll i=0;i<a;i++)
		{
			cin>>item[i];
			sum = sum + item[i];
		}
		sort(item , item + a);
		ll sum1=0;
		for(ll i=0;i<b;i++)
		{
			sum1 = sum1+ item[i];
		}
		ll sum2=0;
		for(ll i=a-1;i>a-b-1;i--)
		{
			sum2 = sum2 + item[i];
		}
		cout<<max(abs(sum-sum1-sum1),abs(sum-sum2-sum2))<<"\n";
	}
	system("pause");
	return 0;
}