#include<iostream>
using namespace std;
unsigned long long int count=0,k;
unsigned long long int check(int x)
{
	if(x>=1000000000)
	{
		count+=((x/1000000000)*221111111)%k;
		x%=1000000000;
	}
	if(x>=100000000)
	{
		count+=((x/100000000)*22111111)%k;
		x%=100000000;
	}
	if(x>=10000000)
	{
		count+=((x/10000000)*2211111)%k;
		x%=10000000;
	}
	if(x>=1000000)
	{
		count+=((x/1000000)*221111)%k;
		x%=1000000;
	}
	if(x>=100000)
	{
		count+=((x/100000)*22111)%k;
		x%=100000;
	}
	if(x>=10000)
	{
		count+=((x/10000)*2211);
		x%=10000;
	}
	if(x>=1000)
	{
		count+=((x/1000)*221);
		x%=1000;
	}
	if(x>=100)
	{
		count+=((x/100)*22);
		x%=100;
	}
	if(x>=10)
	{
		count+=(x/10)*2;
		x%=10;
	}
	if(x>=5)count++;
	count%=k;	
//	cout<<count<<endl;
	return count;
}
main()
{
	unsigned long long int n,sum=0,i,y,x;
	cin>>x>>y>>k;
	for(i=x;i<=y;i++)
	{
	//	cout<<i<<" ";
		sum+=check(i);
		count=0;
	}cout<<sum%k;
}
