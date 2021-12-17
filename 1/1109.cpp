#include<stdio.h>
#include<iostream>
#include<utility>
using namespace std;
typedef pair<int,int> ii;
main()
{
	double sum=0;
	int n,a,b;
	scanf("%d",&n);
	ii arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		arr[i]={a,b};
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i].first>arr[j].first)
			if(arr[i].second<arr[j].second)
			{
				sum+=double(arr[i].first)+double (arr[j].first);
			}
			
			
		}//	printf("%d %d\n",arr[i].first,arr[i].second);
	}
	
	printf("%.0lf",sum);
}
