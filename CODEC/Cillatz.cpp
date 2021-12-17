#include<stdio.h>
main()
{
	unsigned int a;
	scanf("%u",&a);
	while (1)
	{
		if (a==1) break;
		if (a%2==0)a=a/2;
		else a=3*a+1;
		printf("%u\n",a);
		
	}
}
