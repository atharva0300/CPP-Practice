#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[10];
	cout<<arr[0]<<"\n";
	for(int i=0;i<10;i++)
	{
		arr[i] = i;
	}
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"\n";
	}
	arr[3/2] = 10;
	cout<<arr[1]<<"\n";
	cout<<arr[-1]<<"\n";
	const char *color[4] = {"blue" , "orange" , "yellow" , "red"};
	for(int i=0;i<4;i++)
	{
		cout<<color[i]<<"\n";
	}
	string color1[4] = {"blue" , "red" , "orange" , "yellow"};
	for(int i=0;i<4;i++)
	{
		cout<<color1[i]<<"\n";
	}
	
	// Using the vector class 
	vector<string>person{ "atharva"   , "pingale" , "person"};
	person.push_back("happy");
	for(int i=0;i<person.size();i++)
	{
		cout<<person[i]<<"\n";
	}
	array<string ,4> a {"a" , "b" , "c" ,"d"};
	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<"\n";
	}
	int x[3][2] = {{0,1} , {2,3} , {3,4}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<x[i][j]<<" ";
		}
		cout<<"\n";
	}
	// 3-dimensional array 
	int y[2][3][2] =
    {
        { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }
    };
  
    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at y[" << i << "][" << j
                     << "][" << k << "] = " << y[i][j][k]
                     << endl;
            }
        }
    }
	system("pause");
	return 0;
}