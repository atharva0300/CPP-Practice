#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a ;
	a =30;
	int *p;
	p = &a;
	cout<<"p address : "<<p;
	cout<<"\np value : "<<*p;
	cout<<"\n";
	int array[] = {1,2,3,4,5,6};
	int *ptr;
	ptr = array;
	int n = sizeof(array)/sizeof(int);
	cout<<"n : "<<n;
	cout<<"\nptr value array[0] : "<<*ptr;
	cout<<"\nnaddrss of array[0] : "<<ptr;
	cout<<"\nnext value : "<<*(ptr+1);
	cout<<"\nnext address : "<<(ptr+1);
	for (int i=0;i<n;i++)
	{
		cout<<"\nvalue "<<i<<" : "<<*(ptr+i);
	}
	
	int *ptr2;
	ptr2 = array + (n-1);
	cout<<"\nPrinting in reverse order : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nvalue : "<<n-i<<" : "<<*(ptr2-i);
	}
	cout<<"\n";
	
	
	// Pointers vs array 
	int var[3] = {10,100,200};
	int MAX=3;
	int *ptr3;
	ptr3 =var ;
	for(int i=0;i<MAX;i++)
	{
		cout<<"Address of var["<<i<<"]=";
		cout<<ptr3<<"\n";
		cout<<"value of var["<<i<<"]=";
		cout<<*ptr3<<"\n";
		ptr3++;
	}
	
	for (int i=0;i<MAX;i++)
	{
		cout<<"\n"<<*(var+i);
	}
	
	int j=5;
	int i=5;
	int *ptr4 = &j;
	int *ptr5 = &j;
	int *ptr6 = &i;
	cout<<"\n"<<*ptr5;
	cout<<"\n"<<&ptr5;
	if(ptr4==ptr5){
		cout<<"\nTrue";
		cout<<"\n"<<ptr4;
	}
	if(ptr4!=ptr6){
		cout<<"\nFalse";
		cout<<"\n"<<ptr4;
	}
	if(&ptr4==&ptr5){
		cout<<"\nTrue";
	}
	else if(&ptr4!=&ptr5){
		cout<<"\nTrue";
		cout<<"\n"<<&ptr4;
		cout<<"\n"<<&ptr5;
	}
	if(*ptr4==*ptr5){
		cout<<"\nTrue";
		cout<<"\n"<<*ptr4;
		cout<<"\n"<<*ptr5;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	int t = 5;
	int *tp;
	tp = &t;
	cout<<"\n"<<tp;
	cout<<"\n"<<*tp;
	cout<<"\n"<<&t;
	cout<<"\ntpp : \n";
	int *tpp[3];
	tpp[0] = &t;
	t=6;
	tpp[1] = &t;
	t=7;
	tpp[2]= &t;
	for(int i=0;i<3;i++)
	{
		cout<<"\n"<<*tpp[i];
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}