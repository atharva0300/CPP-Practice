#include<bits/stdc++.h>

using namespace std;

void func()
{
	class Test
	{
		public : 
		void method()
		{
			cout<<"\nLocal class method : ";
		}
		static void person()
		{
			cout<<"\nInside the person class : ";
		}
	};
	Test t;
	Test *tp;
	t.method();
	Test::person();
	class Test2
	{
		Test test;
		public : 
		void testing()
		{
			cout<<"\nTesting finction : ";
		}
	};
	Test2 t2;
	t2.testing();
}
int main()
{
	func();
	cout<<"\n";
	system("pause");
	return 0;
}