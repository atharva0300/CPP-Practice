#include<bits/stdc++.h>

#include<exception>
// library for exceptio handling 

using namespace std;


class ZeroError{};

void sum()
{

    int a,b;
    cout<<"\nEnter 2 numbers : ";
    cin>>a>>b;
    if(a==0 || b==0)
    {
        throw ZeroError();
    }
    else
    {
        cout<<"\nA and B are not zero";
    }
}

/* Rethrowing the exception : 
If your catch handler , does not completely handle an excpetion , you may rethrow it to the next enclosing context */

/* 
    example : catch(E e)
    {
        // processing to hancle the e as an incomplete throw
    }
*/

struct MyException : public exception
{
    const char* what() const throw ()
    {
        return "C++ Exception";
    }
};


void MyHandler()
{

    try{
        throw "Hello";
    }
    catch(const char*)
    {
        cout<<"\bCaught exception inside mydandler\n";
        throw;
        // re-throw char* out of the function 
    }
}

/* 
    Exception specification : 
    A function can throw only exceptions f ttypes in its specification ( or derived types )

    1. if a function throws a non-specification exception, function unexpectedly called 
    2. This normally terminates the program 

    C::C() throw(int , char);
    C::C(const C&); // can throw any type of exception, inclusing float 
    C::~C() throw();    // can not throw any excpetions 


*/

class Test1{
    public : 
    Test1(){
        cout<<"Costructig a oject of test1\n";
    }
    ~Test1()
    {
        cout<<"\nDestructing object of test1\n";
    }
};

class Test2
{
    public : 
    // Following constructir throws an integer exception 
    Test2()
    {
        cout<<"\nConstructing an objec test2\n";
        throw 20;
    }
    ~Test2()
    {
        cout<<"\nDestructing object of test2\n";
    }
};


int main()
{
    try
    {
        sum();
    }
    catch(ZeroError a)
    {
        cout<<"\nException found\n";
    }
    catch(float x)
    {
        cout<<"\nCaught float exception \n";
    }
    /* the catch(float x) won't be exeucted, becase , the data type of the floa and the class ZeroError , is not the same */

    //-------------------------------------
    cout<<"\nMain start \n";
    try{
        MyHandler();
    }
    catch(const char*)
    {
        cout<<"\nCaught an exception inside main \n";
    }

    //--------------------------------------

    try
    {
        Test1 t1;    //Constructed and Destruced
        Test2 t2;   // Partially constructed
        Test1 t3;   // t3 is not constructed as this statement never gets executed 

    }
    catch(int i)
    {
        cout<<"\nCaught : "<<i<<"\n";
    }

    //-----------------------------------------




    cout<<"\n";
    return 0;
}