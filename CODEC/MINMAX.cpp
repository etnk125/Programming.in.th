#include<stdio.h>
main(){
	int i;
	unsigned int r;
	long int m,n,a;
	scanf("%u",&r);
	scanf("%ld",&a);
	m=a;n=a;
	for (i=1;i<r;i++)
	{
		scanf("%ld",&a);
		if(a<=n)n=a;
		if(a>=m)m=a;
	}
	printf("%ld\n%ld",n,m);
}
