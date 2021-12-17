#include<stdio.h>
main(){
	int a[8],i,sum=0,j;
	for (i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
for (i=0;i<9;i++)
{
	for (j=0;j<9;j++)
	{
		if((sum-a[i]-a[j])==100&&i!=j)
		{
			sum=sum-a[i]-a[j];
			a[i]=0;
			a[j]=0;
			for(int k=0;k<9;k++)
			{
				if(a[k]!=0)
				{
					printf("%d\n",a[k])	;
				}	
			}	
			break;
		}	
	}
}

	
}
