// STICKS
// STICKS

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int length[n];
		for(int i=0;i<n;i++)
		{
			cin>>length[i];
		}
		sort(length , length + n);
		vector<int>counter;
		int flag=0;
		int i=0;
		while(i<n)
		{
			if(length[i]==length[i-1])
			{
				counter.push_back(length[i]);
				flag=1;
				i = i+2;
			}
			else 
			{
				i++;
			}
		}
		sort(counter.rbegin() , counter.rend());
		if(flag!=0 && counter.size()!=1)
		{
			cout<<counter[0]*counter[1]<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
	}
	system("pause");
	return 0;
}