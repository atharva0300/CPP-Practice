#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int player[n];
        int type[n];
        for(int i=0;i<n;i++)
        {
            cin>>player[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>type[i];
        }
        int min_player = 100;
        int min_index = 100;
        for(int i=0;i<n;i++)
        {
            if( type[i] == 0  && player[i] <= min_player )
            {
                min_player=player[i];
            }
            if(type[i] == 1 && player[i] <= min_index)
            {
                min_index=player[i];
            }
            
        }
        if(min_index + min_player <= 100 - s)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
	// your code goes here
	return 0;
}
