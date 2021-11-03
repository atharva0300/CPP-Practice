#include <bits/stdc++.h>
using namespace std;
#include<math.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int a[n],i;
	   int c=0;
	   for(i=0;i<n;i++)
	   {
	      cin>>a[i];
	   }
	   int x=0;
	   int m=*max_element(a,a+n);
	   if(m>k)
	   cout<<"-1"<<endl;
	   else
	   {
	      for(i=0;i<n;i++)
	      {
	         x+=a[i];
	         if(x>k)
	         {
	            c++;
	            x=a[i];
	         }
	         
	      }
	      c++;
	      cout<<c<<endl;
	   }
	  
	}
	return 0;
}
