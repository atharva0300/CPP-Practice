#include<bits/stdc++.h>
using namespace std;


class Divide
{
    private : 
    int *x;
    int *y;

    public : 
    Divide()
    {
        x= new int();
        y = new int();
        cout<<"\nEnter 2 numbers : ";
        cin>>*x>>*y;
        try
        {
            if(*y==0)
            {
                throw *x;
            }
        }
        catch(int)
        {
            delete x;
            delete y;
            cout<<"\nSecond number cannot be 0 \n";
            throw;
        }
    }

    ~Divide()
    {
        try
        {
            delete  x;
            delete y;
        }
        catch(...)
        {
            cout<<"\nError while deallocating memory \n";
        }
    }

    float division()
    {
        return (float)(*x)/(*y);
    }
};


int main()
{
    try 
    {
        Divide d;
        float result = d.division();
        cout<<"\nResult of division : "<<result<<"\n";
    }
    catch(...)
    {
        cout<<"\nUnknown exception\n";
    }
    return 0;
}