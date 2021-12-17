#include<stdio.h>
#include<algorithm>
using namespace std;
main()
{
	int n,i,j;
	scanf("%d",&n);
	double arr[n][2],max=-1,maxc=-1,sum,temp,maxx=10000000000,ans;
	bool index[n]={0};
//	index[0]=1;
	for(i=0;i<n;i++)
	scanf("%lf %lf",&arr[i][0],&arr[i][1]);
	for(i=0;i<n;i++)
	{
	//	printf("********\n");
		index[i]=1;
	//	printf("********\n");
		do
		{
			maxc=-1;
			sum=0;
			for(j=0;j<n;j++)
			if(index[j])
			{
				sum+=arr[j][0];
				if(arr[j][1]>maxc)maxc=arr[j][1];
			}
			temp=sum/maxc;
			if(temp>max)
			{
				max=temp;
				ans=sum;
				maxx=maxc;
			}
			else if(temp==max&&maxc<maxx)
			{
				ans=sum;
				maxx=maxc;
			}
//			for(int k=0;k<n;k++)
//			printf("%d",index[k]);
//			printf("\n");
//			printf("%lf %.0lf %.0lf\n",temp,sum,maxc);
//			printf("%lf %.0lf %.0lf\n",max,ans,maxx);
		}
		while(prev_permutation(index,index+n));	
	}
	printf("%.0lf %.0lf",ans,maxx);	
}
