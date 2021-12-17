#include<stdio.h>
main(){
	int n;
	scanf("%d ",&n);
	int num,res;
	char fin[n]={0};
	for(int i=0;i<n;i++)
	{	
		int count=0;
		while(1)
		{
			char a;
			scanf("%c",&a);
			if(a!=48&&a!=49&&a!=50&&a!=51&&a!=52&&a!=53&&a!=54&&a!=55&&a!=56&&a!=57)
			{
				if(count==1&&num==2)fin[i]=1;
				else if(count==1&&num==1)fin[i]=1;
				else if(res==0)fin[i]=2;
				else fin[i]=1;
				break;
			}
			num=a-48;
			if(count==0)res=num%2;
			else res=(res*10+num)%2;	
			count++;	
		}
	}
	for(int i=0;i<n;i++)
	printf("%c\n",fin[i]==1?'T':'F');
}
