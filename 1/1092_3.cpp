#include<stdio.h>
main()
{
	int a,b,st,nd,temp;
	scanf("%d%d",&a,&b);
	int pow[a+1],parent[a+1],i;
	for(i=1;i<=a;i++)
	{
		scanf("%d",&pow[i]);
	}
	while(b--)
	{
		scanf("%d %d",&st,&nd);
		while(pow[st]==-1)st=parent[st];
		while(pow[nd]==-1)nd=parent[nd];
		if(st==nd)printf("-1\n");
		else
		{
			if(st>nd)
			{
				temp=st;
				st=nd;
				nd=temp;
			}
			
			if(pow[st]<pow[nd])
			{
				temp=st;
				st=nd;
				nd=temp;
			}
			pow[st]+=pow[nd]/2;
			pow[nd]=-1;
			parent[nd]=st;
			printf("%d\n",st);
		}
//		for(int i=1;i<=a;i++)
//		cout<<pow[i];
//		cout<<endl;
		
	}
}
