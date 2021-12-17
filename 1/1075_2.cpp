#include<algorithm>
#include<stdio.h>
using namespace std;
main()
{
	int n,i,j,k;
	scanf("%d",&n);
	double max=-1,ans,minelec,sum=0,temp;
	pair<double,double> worm[n];
//	bool index[n]={0};
	for(i=0;i<n;i++)
	scanf("%lf %lf",&worm[i].second,&worm[i].first);
	sort(worm,worm+n);
	for(i=0;i<n;i++)
	{
		sum+=worm[i].second;
		if(i==n-1||worm[i].first!=worm[i+1].first)
		{
			temp=sum/worm[i].first;
			if(temp>max)
			{
				max=temp;
				ans=sum;
				minelec=worm[i].first;
			}
		}
	}
	printf("%.0lf %.0lf",ans,minelec);
	
}
