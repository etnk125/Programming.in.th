#include<stdio.h>
main()
{
	int i,j,n,m,k,x,y,r,max=-1;
	scanf("%d %d %d",&n,&m,&k);
	int down[m+1]={0},right[n+1]={0};
	for(i=0;i<k;i++)
	{
		scanf("%d %d %d",&x,&y,&r);
		for(j=x-r;j<=x+r&&j<=n;j++)
		right[j]++;
		for(j=y-r;j<=y+r&&j<=m;j++)
		down[j]++;
	}
	for(i=0;i<=n;i++)
	if(max<right[i])max=right[i];
	for(i=0;i<=m;i++)
	if(max<down[i])max=down[i];
	printf("%d",max);
}
