// Fair Elections 
// FAIRELCT 
#include<bits/stdc++.h>
using namespace  std;
bool get_sum(int[] , int , int[] , int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int n_arr[n];
		int m_arr[m];
		int sum_m=0;
		int sum_n=0;
		for(int i=0;i<n;i++)
		{
			cin>>n_arr[i];
			sum_n = sum_n + n_arr[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>m_arr[i];
			sum_m = sum_m + m_arr[i];
		}
		sort(n_arr , n_arr+ n);
		sort(m_arr, m_arr +m , greater<int>());
		int size = min(n,m);
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(sum_n>sum_m)
			{
				break;
			}
			sum_n = sum_n + m_arr[i] - n_arr[i];
			sum_m = sum_m  + n_arr[i] - m_arr[i];
			count++;
		}
		if(sum_m>=sum_n)
		{
			cout<<"-1\n";
		}
		cout<<count<<"\n";
		
	}
	system("pause");
	return 0;
}

