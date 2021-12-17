#include<stdio.h>
main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	char key[2][a+1],in,temp;
	scanf("%s",key[0]);
	scanf("%s ",key[1]);
	while(b--)
	{
//		scanf("%0c",&in);
		in=getchar();
		for(i=0;i<a;i++)
		{
			if(key[0][i]>key[1][i])
			{
				temp=key[0][i];
				key[0][i]=key[1][i];
				key[1][i]=temp;
			}
			if(in<=key[0][i])
			{
				in=key[0][i];
			}
			else if(in>=key[1][i])
			{
				in=key[1][i];
			}	
			
		}
	printf("%c",in);
			
	}
	
	
	
	
//	printf("%s\n%s\n%s\n",key[0],key[1],in);
	
}
