#include<bits/stdc++.h>
// to use lexical::cast , include this library 
// #include<boost/lexical_cast.hpp>	// for lexical_cast()
// the library is not found
	
using namespace std;


void getdistinctsubstring(string a)
{
	//create a map 
	map<pair<char,  char> , int>person;
	// count all the pairs 
	for(int i=0;i<a.size()-1;i++)
	{
		person[make_pair(a[i] , a[i+1])]++;
	}
	
	//traverse map to print sub-strings and their
	// counts 
	cout<<"\nDistinct sub-arrays of person map : ";
	for(auto i = person.begin();i!=person.end();i++)
	{
		cout<<i->first.first<<i->first.second<<" - "<<i->second<<" ";
		cout<<"\n";
	}
}
int main()
{
	// stirng s in c++
	string s1 = "athava";
	string s2 = "pingale";
	cout<<s1<<" "<<s2<<"\n";
	
	// counts of dictinct consecutive sub-string of length 2 using c++ STL 
	string s = "abcdabcdcdbasskjds";
	cout<<"\nString : "<<s<<"\n";
	getdistinctsubstring(s);
	
	// converting string into  a number 
	/*
	string s3 = "5";
	float f3 = boost::lexical_cast<float>(str);
	cout<<"\nf3 : "<<f3;
	*/
	int num = 12;
	ostringstream str1;
	str1<<num;	// converts num to str1 
	string temp = str1.str();	// converts to str
	cout<<temp<<"\n";
	int i_val = 12;
	float f_val = 12.3;
	string stri = to_string(i_val);
	cout<<"\nstri : "<<stri;
	string strf = to_string(f_val);
	cout<<"\nfval : "<<strf<<"\n";
	
	// fincidng the sizw of an array without using sizeof()
	// using pointers 
	int arr2[] = {1,2,3,4,5,3,2};
	int size = *(&arr2 + 1) -arr2;
	cout<<"\nNumeber of elements in the array is : "<<size<<"\n";
	cout<<arr2<<"\n";
	cout<<&arr2<<"\n";
	cout<<&arr2 +1<<"\n";
	cout<<*(&arr2 + 1)<<"\n";
	cout<<*(&arr2 + 1)-arr2<<"\n";
	cout<<*(&arr2 + 1 )- arr2<<"\n";
	cout<<*arr2<<"\n";
	cout<<*(arr2+1)<<"\n";
	cout<<*(&arr2+1)<<"\n";
	cout<<*(&arr2)<<"\n";
	
	// reversing a string in c++
	string str2 = "atharva";
	int n =str2.length();
	for(int i=0 ;i<n/2;i++)
	{
		swap(str2[i],  str2[n-i-1]);
	}
	cout<<str2<<"\n";
	// using the inbuilt reverse function in c++
	reverse(str2.begin() ,str2.end());
	cout<<str2<<"\n";
	
	system("pause");
	return 0;
}