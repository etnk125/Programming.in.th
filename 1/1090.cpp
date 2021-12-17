#include<iostream>
using namespace std;
main()
{
	int n,i,j,A;
	unsigned long long int count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>A;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[i]+a[j]==A)count++;
	cout<<count;
	
	
}
