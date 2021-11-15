#include<bits/stdc++.h>
using namespace std;


/* 
    Exceptions and Inheritance : 

    1. New exception classes can be defined to inheri from existing exception classes 
    2. A catch handler for a particular exception class can also catch eceptions of classes derived from that class 
        1. Enables catching related errors of classes with a concise notation
    3. Ininheritance , while throwing exceptions of derived classes , care dhould be taken that catch blicks with base tpe should be written afer the catch block,
    with derived type. Otherwise , the catch block with base tpe catches the exceptions of derived class types too.

    To avoid that we have to write the catch block of base type at last in the sequence 

*/

class Base{};
class Derived : public Base{};

int main()
{
    try 
    {
        throw Derived();
    }
    catch(Derived d)
    {
        cout<<"\nDerived object caught\n";
    }
    catch(Base b)
    {
        cout<<"\nBase object exception caught\n";
    }

    /* The above program, catched the derived class exception */ 
    // If we change the order of the catch statements ,then - 

    try 
    {
        throw Derived();
    }
    catch(Base b)
    {
        cout<<"\nBase object exception caught\n";
    }
    catch(Derived d)
    {
        cout<<"\nDerived object exception caught\n";
    }
    cout<<"\n";

    // the above code , now catches, base class exception 
    return 0;
}