#include<stdio.h>
unsigned long long a[1000001];
main()
{
	unsigned long long int sum=0,n;
	scanf("%llu",&n);
	unsigned long long int i;
	for(i=0;i<n;i++)
	scanf("%llu",&a[i]);
	unsigned long long int h=0;
		for(i=1;i<=n;i++)
		{
			h+=i;
			sum=(sum+a[n-i]*h)%2553;
		}
	printf("%llu",sum);
}
