#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int item[n],a[n],b[n],maxb=0,maxa=1;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		maxa*=a[i];
		maxb+=b[i];
	}int max=maxa+maxb;
//	for(int i=0;i<n;i++)
}
