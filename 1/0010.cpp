#include<iostream>
using namespace std;
main()
{
	int i,num[10],mod[42]={0},count=0;
	for(i=0;i<10;i++)
	{
		cin>>num[i];
		num[i]%=42;
		mod[num[i]]=1;
	}
	for(i=0;i<42;i++)
	if(mod[i]==1)
	count++;
	
	cout<<count;
	
}
