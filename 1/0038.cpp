#include<stdio.h>
#include<string.h>
main()
{
	int n,i,j;
	scanf("%d ",&n);
	char word[n][35],temp[35];
	for(i=0;i<n;i++)
	gets(word[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(word[i],word[j])==0&&strcmp(word[i],"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz")!=0)
	strcpy(word[j],"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
	
	
	for(i=1;i<n;i++)
	{
		strcpy(temp,word[i]);
		//printf("%s\n",temp);
		j=i;
		while(j>0&&strcmp(word[j-1],temp)>0)
		{		
			strcpy(word[j],word[j-1]);
			j--;
		}
		strcpy(word[j],temp);
	}
	
	
	for(i=0;i<n;i++)
	if(strcmp(word[i],"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz")!=0)
	printf("%s\n",word[i]);

}
