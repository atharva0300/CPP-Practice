//Chefs and spells 
// CHFSPL

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[3];
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		sort(arr ,arr+3 , greater<int>());
		cout<<arr[0]+arr[1]<<"\n";
	}
	system("pause");
	return 0;
}