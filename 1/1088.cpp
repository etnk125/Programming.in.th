#include<iostream>
//#include<>
using namespace std;
main()
{
	int n,a,b,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	arr[i]=0;
	int m;
	cin>>m;
	while(m--)
	{
		cin>>a>>b;
		a--;
		b--;
		for(int i=a;i<=b;i++)
		arr[i]++;	
	
	}
	char com;
	cin>>com;
	if(com=='B')b=1;
	else if(com=='G')b=2;
	else b=0;
	for(int i=0;i<n;i++)
	{
		arr[i]+=b;
		if(arr[i]%3==1)sum+=2;
		else if(arr[i]%3==2)sum+=1;
	}
	cout<<sum;
}
