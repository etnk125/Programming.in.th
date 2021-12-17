#include<stdio.h>
#include<algorithm>
main()
{
	int i,a,b,sum=0;
	scanf("%d %d",&a,&b);
	int arr[a];
	for(i=0;i<a;i++)
	scanf("%d",arr+i);
	std::sort(arr,arr+a);
	for(i=a-1;i>0;i-=b)
	sum+=arr[i];
	printf("%d",a!=1? sum:arr[0]);
}
