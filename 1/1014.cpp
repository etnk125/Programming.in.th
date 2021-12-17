#include<stdio.h>
main()
{
	int l,h,n,i,count[2]={0},x,a;
	scanf("%d %d %d",&l,&h,&n);
	int window[l+1]={0};
	while(n--)
	{
		scanf("%d %d",&x,&a);
		for(i=0;i<a;i++)
		if(x+i<=l)window[x+i]++;
	}
	for(i=0;i<l;i++)
	{
		if(window[i]==0)count[0]++;		
		if(window[i]==1)count[1]++;	
//		printf("%d ",window[i]);	
	}
	printf("%d %d",h*count[0],h*count[1]);
	
}
