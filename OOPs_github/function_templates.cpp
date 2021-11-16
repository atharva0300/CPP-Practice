#include<bits/stdc++.h>
using namespace std;

class T{
    public : 
    int a;
}
template<class T>
void swap(T &a , T &b)
{
    T temp = a;
    a =b;
    a = temp;
}

// -----------------------------------

// Function template for finding maximum of 2 numbers 
/*
    1. T represents generic data type 
    2. T will be replaced by specific data type depending upon type of parameter passed to function 'max1'.

*/
void max1(T &x , T &y)
{
    if(x>y)
    {
        cout<<"\nx is greater than y\n";
    }
    else if(x<y)
    {
        cout<<"\nx is less than y \n";
    }
    else
    {
        cout<<"\nX == y \n";
    }
    
}


// --------------------------------------
template<class T1 , class T2>
void Demo(T1 a , T2 b)
{
    cout<<a<<" "<<b;
}


// -----------------------------------------
// First version of f() template 
template<class X>
void f(X a)
{
    cout<<"\nInside f(X a)\n";
}



// -------------------------------------
int main()
{
    int x1 = 4 , y1 =7;
    float x2 = 4.5 , y2 = 7.5;
    cout<<"\nBefore swap : \n";
    cout<<"x1 : "<<x1<<"\ny1 : "<<y1;
    cout<<"\nx2 "<<x2<<"\ny2 : "<<y2;

    swap(x1,y1);
    swap(x2,y2);
    cout<<"\nAfter swap : \n";
    cout<<"x1 : "<<x1<<"\ny1 : "<<y1;
    cout<<"\nx2 : "<<x2<<"\ny2 : "<<y2;
    cout<<"\n";

    // -------------------------------------
    max1(2,4);
    max1(44.66 , 22.13);
    max1('t' , 'p');


    // -----------------------------------
    Demo(10 , 2.5);
    Demo(20.1 , 'A');
    Demo("X" , "Hello");

    // ------------------------------------

    return 0;
}