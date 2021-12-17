#include<stdio.h>
main()
{
	int dw[9],i,j,sum=0;
	for(i=0;i<9;i++)
	{
		scanf("%d",&dw[i]);
		sum+=dw[i];
	}
	
	for(i=0;i<9;i++)
	for(j=0;j<i;j++)
	if(sum-dw[i]-dw[j]==100)
	{
		dw[i]=-1;
		dw[j]=-1;
	}
	for(i=0;i<9;i++)
	if(dw[i]!=-1)
	printf("%d\n",dw[i]);
	
}
