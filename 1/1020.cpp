#include<iostream>
#include<string.h>
#include<ctype.h>
#include<math.h>
using namespace std;
main()
{
	char word[201];
	cin>>word;
	int l=strlen(word),i,j,count=0,countd=0;
	float se=ceil(float (l)/2);
	int sec=se;
	char a[sec];
	char b[sec];
	for(i=0;i<sec+1;i++)
	{
		a[i]='\0';
		b[i]='\0';
	}
	
	if(l%2==1)
	for(i=0;i<sec-1;i++)
	{
		a[i]=toupper(word[i]);
		b[i]=toupper(word[i+sec]);
	}
	else
	for(i=0;i<sec;i++)
	{
		a[i]=toupper(word[i]);
		b[i]=toupper(word[i+sec]);
	}
	
	int r=strlen(b);
	for(i=0;i<sec;i++)
	{
		if(a[i]==b[r-1-i])count++;
		else break;
		
	}
	if(strcmp(a,b)==0)cout<<"Double Palindrome";
	else if(count==r&&l%2==0)cout<<"Palindrome";
	else if(count==r+1&&l%2==1)cout<<"Palindrome";
	else cout<<"No";
	
	
//	cout<<a<<endl<<b<<endl;
//	cout<<a[0]<<endl<<b[sec-1];
}
