#include<iostream>
using namespace std;
main()
{
	int a,count=0;
	for(int i=0;i<3;i++)
	{
		cin>>a;
		while(a>1)
		{
			a/=2;
			count++;
		}
	}cout<<count;
	
}
