#include<stdio.h>
#include<string.h>
main()
{
	char word[101];
	char form[205];
	for(int i=0;i<205;i++)
	form[i]='\0';
	gets(word);
	int i=0;
	while(word[i]!='\0')
	{
		if(word[i]=='a')
		if(word[i+1]=='p')
		if(word[i+2]=='a')
		{
			word[i+1]='0';
			word[i+2]='0';
		}
		
		if(word[i]=='e')
		if(word[i+1]=='p')
		if(word[i+2]=='e')
		{
			word[i+1]='0';
			word[i+2]='0';
		}
		
		if(word[i]=='i')
		if(word[i+1]=='p')
		if(word[i+2]=='i')
		{
			word[i+1]='0';
			word[i+2]='0';
		}
		
		if(word[i]=='o')
		if(word[i+1]=='p')
		if(word[i+2]=='o')
		{
			word[i+1]='0';
			word[i+2]='0';
		}
		
		if(word[i]=='u')
		if(word[i+1]=='p')
		if(word[i+2]=='u')
		{
			word[i+1]='0';
			word[i+2]='0';
		}i++;
	}
	for(i=0;word[i]!='\0';i++)
	if(word[i]!='0')
	printf("%c",word[i]);
}
