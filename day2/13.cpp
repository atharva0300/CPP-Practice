#include<bits/stdc++.h>

// Nested classes 
using namespace std;

class Enclosing
{
	private : 
	int x;
	
	class Nested
	{
		int y ;
		
		public : 
		void myfunc(Enclosing *e)
		{
			cout<<e->x;
		}
	};
};
int main()
{
	
	system("pause");
	return 0;
}