#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cin>>n;
	unsigned long long int a[n]={0};
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		int max;
		cin>>a[i];
		if(a[i-1]<=a[i])max=a[i-1];
		else max=a[i];
		int g=1;
		for(j=max;j>0;j--)
		if(a[i-1]%j==0&&a[i]%j==0)
		{
			g=j;
			break;
		}
		a[i]*=a[i-1];
		a[i]/=g;
	}cout<<a[n-1];
}
