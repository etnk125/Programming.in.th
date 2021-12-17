#include<iostream>
using namespace std;
long long int m;
void check(long long int team[],long long int a,long long int b)
{
	for(int i=1;i<=m;i++)
	if(team[i]==b)team[i]=a;
}
void war(long long int team[],long long int a,long long int b)
{
	if(team[a]>=team[b])
	{
		team[a]+=team[b]/2;
		team[b]=-a;	
		cout<<a<<endl;
		check(team,-a,-b);
	}
	else 
	{
		team[b]+=team[a]/2;
		team[a]=-b;
		cout<<b<<endl;
		check(team,-b,-a);	
	}
}
main()
{
	long long int i,n,a,b;
	cin>>m>>n;
	long long int team[m+1];
	for(i=1;i<=m;i++)
	cin>>team[i];
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(team[a]<0)a=-team[a];
		if(team[b]<0)b=-team[b];
		if(a==b)cout<<"-1\n";
		else war(team,a,b);
	}
}
