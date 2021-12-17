#include<iostream>
using namespace std;
unsigned long long int a[2000000]={0};
main()
{
	int n,i,j,A;
	unsigned long long int count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A;
		a[A]++;	
	}
	
	cin>>A;
	if(A>2000000)cout<<"0";
	else if(A==0)cout<<(a[0]*(a[0]-1)/2);
	else
	{
		for(i=0;i<A;i++)
			if(a[i]!=0&&a[A-i]!=0)
			{
				if(A-i==i)count+=(a[i]*(a[i]-1)/2);
				else if(A-i<i)break;
				else if(i<A-i)count+=(a[i]*a[A-i]);
			}
			
		cout<<count;	
	}
	
	
	
	
	
}
