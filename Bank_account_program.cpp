#include<bits/stdc++.h>

using namespace std;

	
class Account
{
	private : 
	string name;
	int number;
	double saving_balance;
	double current_balance;
	double deposit_amount;
	string acc_type;
	
	protected : 
		int type_of_account;
	
	public : 
	int type()
	{
		cout<<"\nEnter type of account \n";
		cout<<"\n1 - Savings Account ";
		cout<<"\n2 - Current Account ";
		cout<<"\nEnter the choice : ";
		cin>>type_of_account;
		return type_of_account;
	}
	void getdata()
	{
		cout<<"\n-----------------------------";
		cout<<"\nEnter name of the account holder : ";
		cin>>name;
		cout<<"Enter account number : ";
		cin>>number;
		
	}
	
	void display_base()
	{
		cout<<"\nAccount holder name : "<<name;
		cout<<"\nAccount number : "<<number;
		
	}
};

class Savings : public Account
{
	private : 
	float principal;
	float r =4.5;
	int time;
	float compound;

	
	public : 
	Account person;
		int choice;
		
		
	void menu (Account temp){
		person = temp;
		cout<<"\n--------------- MENU ----------------";
		cout<<"\nWelcome to your Saving Account ! ";
		cout<<"\nThe interest rate here is : "<<r;
		cout<<"\n1 - Calculate your compound interest";
		cout<<"\n2 - QUIT";
		cout<<"\nEnter Choice : ";
		cin>>choice;
	}
	
	void getdata()
	{
		cout<<"\n-----------------------------";
		cout<<"\nEnter the principal amount : Rs. ";
		cin>>principal ;
		cout<<"\nEnter the time duration ( in years ) : ";
		cin>>time;
		
	}
	void calculate()
	{
		cout<<"\n-----------------------------";
		compound = principal *  pow((1 + (r/100)) , time);
		cout<<"\nToal Amount : Rs. "<<compound<<" Anually \n";
		cout<<"\nInterst earned : Rs. "<<compound-principal<<"\n";
	}
	void display()
	{
		cout<<"\n-----------------------------";
		person.display_base();
		cout<<"\nType of Account : Savings";
		cout<<"\nAmount in the Saving's account : Rs. "<<compound<<"\n";
	}
};

class Current : public Account 
{
	private : 
		float min = 25000;
		float amount =0;
		float dep_amount;
		float with_amount;
		float fine = 1000;
		float net =0;
		
	public : 
	Account person;
	int choice ;
	void menu(Account temp)
	{
		person = temp;
		cout<<"\n------------- MENU -------------";
		cout<<"\nWelcome the Current Account section ";
		cout<<"\nFixed Deposit : "<<min;
		cout<<"\n1 - First Deposit";
		cout<<"\n2 - Deposit ";
		cout<<"\n3 - Withdraw ";
		cout<<"\n4 - Display Account holder details ";
		cout<<"\n5 - QUIT";
		cout<<"\nEnter choice : ";
		cin>>choice;
	}
	
	void f_deposit()
	{
		cout<<"\n-----------------------------";
		cout<<"\nEnter deposit Amount : Rs. ";
		cin>>amount;
		if (amount<min)
		{
			cout<<"\nThe Amount desposited is less than the minimum balance,\nplease";
			cout<<" deposit an amount greater than or equal to "<<min;
			cout<<"\n";
			f_deposit();
		}
		cout<<"\nFirst Deposit successful";
		cout<<"\n";
	}
	void deposit()
	{
		cout<<"\n-----------------------------";	
		if (amount==0)
		{
			cout<<"\nFirst have to make an initial deposit ";
			f_deposit();
		}
		else{
			cout<<"\nEnter the deposit amount : Rs. ";
			cin>>dep_amount;
			amount = amount + dep_amount;
			cout<<"\n";
		}

	}
	
	void withdraw()
	{
		cout<<"\n-----------------------------";
		cout<<"\nBalance : "<<amount;
		if(amount==0)
		{
			cout<<"\nBalance is 0 , please make your first deposit first";
			f_deposit();
		}
		cout<<"\nEnter the Amount to Withdraw : Rs. ";
		cin>>with_amount;
		if(amount-with_amount <min)
		{
			cout<<"\nCan't withdraw the amount, have to maintain the minimum balance\n\
			Please enter the correct amount ";
			cout<<"\nImposing a Service Charge of Rs. "<<fine;
			net = net + fine;
			withdraw();
		}
		else 
		{
			cout<<"\nWithdrawal Successful";
			amount = amount - with_amount;
		}
		cout<<"\n";
	}
	
	void display()
	{
		cout<<"\n-----------------------------";
		person.display_base();
		cout<<"\nType of Account : Current";
		cout<<"\nBalance  :Rs. "<<amount;
		cout<<"\nNet Service Charge : Rs. "<<net<<"\n";
		
	}
};

int main()
{
	Account one[10];
	Savings two[10];
	Current three[10];
	for(int i=0;i<9;i++)
	{
		cout<<"\n-----------------------------";
		cout<<"\nCustomer : "<<i+1;
		int res = one[i].type();
		one[i].getdata();	
		if (res==1)
		{
			do {
				two[i].menu(one[i]);
				if (two[i].choice==1)
				{
					two[i].getdata();
					two[i].calculate();
				}	
			}while(two[i].choice!=2);
			
		}
		else if(res==2)
		{
			do{
				three[i].menu(one[i]);
				if (three[i].choice==1)
				{
					three[i].f_deposit();
				}
				else if (three[i].choice==2)
				{
					three[i].deposit();
				}
				else if(three[i].choice==3)
				{
					three[i].withdraw();
				}
				else if(three[i].choice==4)
				{
					three[i].display();
				}
			}while(three[i].choice!=5);
	
		}
	}
	
	system("pause");
	return 0;
}