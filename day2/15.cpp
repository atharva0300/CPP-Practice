#include<bits/stdc++.h>

using namespace std;


class Point
{
	private : 
	int x , y;
	
	public : 
	Point(int a,int b)
	{
		x =a;
		y=b;
	}
	
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};


int main()
{	
	Point p1(10,15);
	Point p2 = p1;
	cout<<"\np1.x : "<<p1.getX()<<"\np1.y : "<<p1.getY();
	cout<<"\np2.x : "<<p2.getX()<<"\np2.y : "<<p2.getY();
	cout<<"\n";
	system("pause");
	return 0;
}