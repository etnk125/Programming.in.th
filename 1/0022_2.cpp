#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,i,j,k;
	cin>>k;
	if(k==1)cout<<"*";
	else if(k==2)cout<<"*\n*";
	else
	{
	if(k%2==1)n=k+1;
	else n=k;
	for(i=0;i<n;i++)
	{
//		cout<<i;
		if(i==0||i==n-1)
		{
			for(j=0;j<n/2-1;j++)
			cout<<"-";
			cout<<"*";
			for(j=0;j<n/2-1;j++)
			cout<<"-";
			cout<<endl;
		}
		if(i>0&&i+1<n/2)
		{
			for(j=0;j<n/2-1-i;j++)
			cout<<"-";
			cout<<"*";
			for(j=0;j<2*i-1;j++)
			cout<<"-";
			cout<<"*";
			for(j=0;j<n/2-1-i;j++)
			cout<<"-";
			cout<<endl;
		}
		if(k%2==0)
		{
			if(i==n/2)
			{
				for(int m=0;m<2;m++)
				{
					cout<<"*";
					for(j=0;j<n-3;j++)
					cout<<"-";
					cout<<"*"<<endl;
				}
				
			}
		}
		if(k%2==1)
		{
			if(i==n/2)
			{
				cout<<"*";
				for(j=0;j<n-3;j++)
				cout<<"-";
				cout<<"*"<<endl;
			}
		}
		if(i+1>n/2+1&&i+1<n-1+1)
		{
			for(j=0;j<i-n/2;j++)
			cout<<"-";
			cout<<"*";
			for(j=0;j<n-1-2*(i+1-n/2);j++)
			cout<<"-";
			cout<<"*";
			for(j=0;j<i-n/2;j++)
			cout<<"-";
			cout<<endl;
		}
		
			
	}
	}
	


}
