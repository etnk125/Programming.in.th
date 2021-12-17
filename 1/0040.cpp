#include<stdio.h>
main(){
	int n;
	scanf("%d ",&n);
	int num,res;
	for(int i=0;i<n;i++)
	{	
		int count=0;
		while(1)
		{
			char a;
			scanf("%c",&a);
			if(a!=48&&a!=49&&a!=50&&a!=51&&a!=52&&a!=53&&a!=54&&a!=55&&a!=56&&a!=57)
			{
				if(count==1&&num==2)printf("T\n");
				else if(count==1&&num==1)printf("T\n");
				else if(res==0)printf("F\n");
				else printf("T\n");
				break;
			}
			num=a-48;
			if(count==0)res=num%2;
			else res=(res*10+num)%2;	
			count++;	
		}
	}
}
