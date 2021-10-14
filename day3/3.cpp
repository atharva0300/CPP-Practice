#include<bits/stdc++.h>

using namespace std;

int main()
{
	string line = "Atharva pigale is here";
	vector<string>tokens ;
	stringstream check1(line );
	
	string intermediate;
	
	while(getline(check1 , intermediate , ' '))
	{
		tokens.push_back(intermediate);
	}
	// printing the token vector 
	for(int i=0;i<tokens.size ();  i++)
	{
		cout<<tokens[i]<<"\n";
	}
	
	char str3[] = "atharva-pingale-is-here";
	char *token = strtok(str3 ,  "-");
	cout<<"\nUsing character : \n";
	while(token!=NULL)
	{
		cout<<token<<"\n";
		token = strtok(NULL , "-");
	}
	// Another example of strtok()
	char name[100] = "person one is here because of that";
	char space[2] = " ";
	char *token2 = strtok(name ,space );
	cout<<"\nUsing spacep[4] array :\n";
	while(token2!=0)
	{
		cout<<token2<<"\n";
		token2 = strtok(0 , space);
	}
	
	
	// practicing the aboe again 
	string line2 = "perosn is atharva";
	vector<string>tokens2;
	stringstream check2(line2);
	
	string intermediate2;
	cout<<"\nPractice getline using string : \n";
	while(getline(check2, intermediate2 , ' '))
	{
		tokens2.push_back(intermediate2);
	}
	for(int i=0;i<tokens2.size();i++)
	{
		cout<<tokens2[i]<<"\n";
	}
	
	char name2[] = "I am a superman";
	char *tokens3 ;
	tokens3 = strtok(name2," ");
	cout<<"\nPractice using char and strtok : \n";
	while(tokens3!=NULL)
	{
		cout<<tokens3<<"\n";
		tokens3 = strtok(NULL ," ");
	}
	
	char name4[100] = "this-is-another-string";
	char *tokens4;
	char dash[4] = "-";
	cout<<"\nPractice using char , strtok and dash char array : \n";
	tokens4 = strtok(name4 , dash);
	while(tokens4!=0)
	{
		cout<<tokens4<<"\n";
		tokens4 = strtok(0 , dash);
	}
	
	// Converting number to stirng 
	// practice 
	int n=  123;
	string s1 = to_string(n);
	cout<<"\nString s1 : "<<s1<<"\n";
	system("pause");
	return 0;
}