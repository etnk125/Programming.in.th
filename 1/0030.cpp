#include<stdio.h>

main()
{
	int num3,num11;
	int res3=0,res11=0;
	int count=0;
	char a;
	while(1)
	{
		scanf("%c",&a);
		if(a!=48&&a!=49&&a!=50&&a!=51&&a!=52&&a!=53&&a!=54&&a!=55&&a!=56&&a!=57)
		{
			printf("%d %d",res3,res11);
			break;
		}
		else
		{
			num3=a-48;
			num11=num3;
			if(count==0)
			{
				res11=num11%11;
				res3=num3%3;
			}else
			{
				res11=(10*res11+num11)%11;
				res3=(10*res3+num3)%3;
			}
				
		}
		count++;
	}
}
