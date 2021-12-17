#include<stdio.h>
#include<string.h>
main()
{
	char word[201];
	gets(word);
	int l=strlen(word),i,j;
	for(i=1;i<l;i++)
	{
		if(word[i]==')'&&word[i-1]=='(')
		{
			j=i+1;
			while(word[j]!='\0')
			{
				word[j-2]=word[j];
			//	printf("%c",word[j-2]);
				j++;
				
			}
			word[j-1]='\0';
			word[j-2]='\0';
		//	printf("\n%s\n",word);
			i-=2;
		}		
	}
	printf("%d",strlen(word));
}

