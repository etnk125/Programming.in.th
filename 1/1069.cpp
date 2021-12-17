#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int l;
	cin>>l;
	char ball[l+1];
	int i,j;
	cin>>ball[0];
	for(i=1;i<l;i++)
	{
		cin>>ball[i];
		if(ball[i]==ball[i-1])
		{
			i-=2;
			l-=2;
		}		
	}
	printf("%d\n",l);
	if(l==0)printf("empty");
	else 
	{
		for(i=0;i<l;i++)
		printf("%c",ball[l-1-i]);
	}	
	
	
}

