#include<stdio.h>
main(){
	int num[3],i,temp,j,temp2;
	char word[4];
	
	for(i=0;i<3;i++)
	scanf("%d",&num[i]);
	for(i=0;i<3;i++)
	scanf(" %c",&word[i]);
//	printf("\n%d %d %d\n",word[0],word[1],word[2]);
	for(i=1;i<3;i++)//insertion sort
	{
		temp=num[i];
		j=i;
		while(j>0&&num[j-1]>=temp)
		{
			num[j]=num[j-1];
			j--;
		}
		num[j]=temp;
	}
	for(i=0;i<3;i++)//insertion sort
	{
		if(word[i]==65)printf("%d ",num[0]);
		if(word[i]==66)printf("%d ",num[1]);
		if(word[i]==67)printf("%d ",num[2]);
		
	}
//	printf("\n%d %d %d",num[0],num[1],num[2]);
//	printf("\n%d %d %d",word[0],word[1],word[2]);
}
