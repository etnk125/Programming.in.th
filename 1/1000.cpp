#include<stdio.h>
main()
{
	int l,n,i,j,count;
	scanf("%d %d",&l,&n);
	char a[n][l+1];
	int index[n]={0};
	scanf("%s",a[0]);
	for(i=1;i<n;i++)
	{
		count=0;
		scanf("%s",a[i]);
		for(j=0;j<l;j++)	
			if(a[i][j]!=a[i-1][j])count++;	
		
		if(count>2)index[i-1]=1;		
	}	
	for(i=0;i<n;i++)
	if(index[i]==1)
	{
		printf("%s",a[i]);
		break;
	}else if(i==n-1)printf("%s",a[i]);
	

}
