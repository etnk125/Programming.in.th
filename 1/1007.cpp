#include<stdio.h>
main()
{
	int way,i,j;
	while(1)
	{
		int work=1,sold=0;
		scanf("%d",&way);
		if(way==-1)break;
		else 
		{
			while(way--)
			{
				int temp=sold;
				sold=work;
				work+=1+temp;	
			}
			printf("%d %d\n",work,work+sold+1);
			
		}
	}
}
