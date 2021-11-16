#include<bits/stdc++.h>
using namespace std;

/*
 CLASS template : 
 1. Class template defines a generic class that specfies all the functions used by the class .
 2. The type of data on which function works will be specified as a parameter , when objects of that class are created .
 3. Thus they are also called as parameterized classes .
 4. Class created from a classs template is called as template class.

*/
/* 
    instantiation : classname<type>objecname(arglist);
*/


template<class T>
class Demo
{
    private : T n1,n2,n3;
    public : 
    Demo(T x , T y , T z)
    {
        n1 =x;
        n2 = y;
        n3 = z;
    }
    void avg()
    {
        cout<<""<<(n1+n2+n3)/3;
    }
};

// Normal calculator
template<class T>
class Calculater
{
    private  :
    T num1, num2;

    public : 
    Calculator(T n1 , T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displaayResult()
    {
        cout<<"\nNumebrs : "<<num1<<" and "<<num2<<"\n";
        cout<<num1<<" + "<<num2<<" = "<<add()<<"\n";
        cout<<num1<<" - "<<num2<<" = "<<subtract()<<"\n";
        cout<<num1<<" * "<<num2<<" = "<<multiply()<<"\n";
        cout<<num1<<" / "<<num2<<" = "<<divide()<<"\n";
    }

    T add(){
        return num1+num2;
    }
    T subtract(){
        return num1-num2;
    }
    T multiply(){
        return num1*num2;
    }
    T divide(){
        return num1/num2;
    }
};

int main()
{
    Demo<int>s1(10,20,30);
    Demo<float>s2(50.5 , 40.5 , 30.5);

    cout<<"\nAverage : "<<s1.avg();
    cout<<"\nAverage : "<<s2.avg();

    // --------------------------------------

    Calculator<int>intCalc(2,1);
    Calculator<int>floatCalc(2.4 , 1.2);
    cout<<"\nint results : ";
    intCalc.displayResult();
    cout<<"\n"<<"Float results : ";
    floatCalc.displayresult();

    cout<<"\n";

    return 0;
}