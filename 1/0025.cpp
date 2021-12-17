#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char num_1[101],num_2[101];
	char op;
	cin>>num_1>>op>>num_2;
	if(op=='*')
	{
		int l=strlen(num_1)+strlen(num_2)-2;
		cout<<"1";
		for(int i=0;i<l;i++)
		cout<<"0";
	}
	else
	{
		if(strlen(num_1)>strlen(num_2))
		{
			int l=strlen(num_1)-strlen(num_2);
			num_1[l]='1';
			cout<<num_1;
		}
		else if(strlen(num_1)<strlen(num_2))
		{
			int l=strlen(num_2)-strlen(num_1);
			num_2[l]='1';
			cout<<num_2;
		}else 
		{
			cout<<"2";
			for(int i=1;i<strlen(num_1);i++)
			cout<<"0";
		}	
	} 	
}

