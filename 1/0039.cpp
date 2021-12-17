#include<stdio.h>
main()
{
	int i,j,n,m,count,temp,c=0,k;
	scanf("%d %d",&n,&m);
	int all[n],after[m],can[n-m];
	for(i=0;i<m;i++)
	scanf("%d",&after[i]);
	for(i=0;i<n;i++)
	all[i]=i+1;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<m;j++)
		{
			if(all[i]==after[j])
			{
				count++;
			}
			
		}
		if(count==0)
		{
			can[c]=all[i];
			c++;
		//	printf("%d\n",can[c-1]);	
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<(n-1)*(n-2);j++)
		{
			printf("%d\n",can[i]);
			for(k=0;k<0;k++)
			{
				if(all[k]!=can[i])
				{
					
				}
			}
		}
	}

	
	
}
