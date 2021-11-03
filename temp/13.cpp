// Save Konoha 
// SAVKONO

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,z;
		ll ans=0;
		cin>>n>>z;
		priority_queue<int>q;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			q.push(x);
		}
		while(q.size())
		{
			ans++;
			auto a=q.top();
			z=z-a;
			q.pop();
			if(a/2)q.push(a/2);
			if(z<=0)break;
		}
		if(z<0)
		{
			cout<<ans<<"\n";
		}
		else
		{
			cout<<"Evacuate\n";
		}
	}
	system("pause");
	return 0;
}