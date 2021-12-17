#include<iostream>
int count=0,k;
using namespace std;
int check(int x)
{
	while(x>=1000000000){
		x-=1000000000;count+=221111111;
	}
	while(x>=100000000)
	{
		x-=100000000;count+=22111111;
	}
	while(x>=10000000)
	{
		x-=10000000;count+=2211111;
	}
	while(x>=1000000)
	{
		x-=1000000;count+=221111;
	}
	while(x>=100000)
	{
		x-=100000;count+=22111;
	}
	while(x>=10000)
	{
		x-=10000;count+=2211;
	}
	while(x>=1000)
	{
		x-=1000;count+=221;
	}
	while(x>=100)
	{
		x-=100;count+=22;
	}
	while(x>=10)
	{
		x-=10;count+=2;
	}
	if(x>=5)count++;
	//cout<<count<<endl;
	count%=k;
	//cout<<count<<endl;
	return count;
}
main()
{
	int n,sum=0,i,y,x;
	cin>>x>>y>>k;
	for(i=x;i<=y;i++)
	{
	//	cout<<i<<" ";
		sum+=check(i);
		count=0;
	}cout<<sum%k;
}
