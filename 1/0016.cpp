#include<stdio.h>
#include<string.h>
main(){
	int n,i,j,mod,k,count[3]={0};
	scanf(" %d ",&n);
	char exam[n+2],test_1[n+2],test_2[n+2],test_3[n+2];
	gets(exam);
	for(i=0;i<n;i++)//set Adrian
	{
		mod=i%3;
		if(mod==0)test_1[i]='A';
		if(mod==1)test_1[i]='B';
		if(mod==2)test_1[i]='C';
	//	printf("%c ",test_1[i]);
	}
	
	for(i=0;i<n;i++)//set Bruno
	{
		mod=i%2;
		k=((i+1)/2)%2;
		if(mod==0)test_2[i]='B';
		if(mod==1&&k==1)test_2[i]='A';
		if(mod==1&&k==0)test_2[i]='C';
	//	printf("%c ",test_2[i]);
	}
	
	for(i=0;i<n;i++)//set Goran
	{
		if((i/2)%3==0)test_3[i]='C';
		if((i/2)%3==1)test_3[i]='A';
		if((i/2)%3==2)test_3[i]='B';
	//	printf("%c ",test_3[i]);
	}	
//	printf("\n%s\n%s\n%s",test_1,test_2,test_3);

	for(i=0;i<n;i++)
	{
		if(exam[i]==test_1[i])count[0]++;
		if(exam[i]==test_2[i])count[1]++;
		if(exam[i]==test_3[i])count[2]++;
		
	}
	int max=-1;
	for(i=0;i<3;i++)
	{
		if(count[i]>=max)
		{
			max=count[i];
		}
	}
	printf("%d\n",max);
	if(count[0]>=max)printf("Adrian\n");
	if(count[1]>=max)printf("Bruno\n");
	if(count[2]>=max)printf("Goran");

}
