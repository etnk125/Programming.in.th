#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	float f=n;
	if(n==1)printf("%f",2*f);
	else if(n==3)printf("%f",3.732051);
	else printf("%f",n%2==0?f:f+.464102);
}
