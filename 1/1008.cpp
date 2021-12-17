#include<stdio.h>
main()
{
	int n,a,i,b,h,min=1000000,max=-1;
	int sky[300]={0};
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&h,&b);
		for(i=a;i<b;i++)
		if(h>sky[i])
		sky[i]=h;
		if(min>a)min=a;
		if(max<b)max=b;
	}
	for(i=min;i<=max;i++)
	{
		printf("%d %d ",i,sky[i]);
		while(sky[i]==sky[i+1])
		i++;
		//i--;
	}
}
