#include<iostream>
using namespace std;
main()
{
	int a,b;
	cin>>a>>b;
	int pow[a+1],parent[a+1];
	for(int i=1;i<=a;i++)
	{
		cin>>pow[i];
	}
	while(b--)
	{
		int st,nd;
		cin>>st>>nd;
		while(pow[st]==-1)st=parent[st];
		while(pow[nd]==-1)nd=parent[nd];
		if(st==nd)cout<<-1<<endl;
		else
		{
			if(st>nd)
			{
				int temp=st;
				st=nd;
				nd=temp;
			}
			
			if(pow[st]<pow[nd])
			{
				int temp=st;
				st=nd;
				nd=temp;
			}
			pow[st]+=pow[nd]/2;
			pow[nd]=-1;
			parent[nd]=st;
			cout<<st<<endl;
		}
//		for(int i=1;i<=a;i++)
//		cout<<pow[i];
//		cout<<endl;
		
	}
}
