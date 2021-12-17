#include<stdio.h>
#include<string.h>
#include<list>
#include<map>
using namespace std;
main()
{
	map<char,int> q;
	q['A']=0;
	q['B']=0;
	q['C']=0;
	q['D']=0;
	q['E']=0;
	q['F']=0;
	q['G']=0;
	q['!']=0;
	int count=0,alive=7,i,min,len;
//	string a;
	char index,ii,a[100002];
	while(1)
	{
		scanf("%s",a);
		len=strlen(a);
		if(a[0]=='!')break;
		for(i=0;i<len;i++)
		if(q[a[i]]!=-1)
		q[a[i]]++;
		min=999999999;
		for(ii='A';ii<='G';ii++)
		{
			if(q[ii]!=-1&&q[ii]<min)
			{
				min=q[ii];
				count=1;
				index=ii;
			}
			else if(q[ii]==min)
			{
				count++;
			}
		}
		if(q['!']!=0)break;
		if(count==1)
		{
			if(alive!=1)
			{
				q[index]=-1;
				alive--;	
			}
			
		}
		
		
	}
//	int eiei=0;
	printf("%d\n",alive);
	while(alive>0)
	{
		int max=-1;
		list<char>index;
		for(ii='A';ii<='G';ii++)
		{
			if(q[ii]>max)
			{
				max=q[ii];
			}
		}
		for(ii='A';ii<='G';ii++)
		{
			if(q[ii]==max)
			{
				index.push_back(ii);
				alive--;
				q[ii]=-1;
				
			}
		}
		index.sort();
		while(!index.empty())
		{
			printf("%c %d\n",index.front(),max);
			index.pop_front();
			//cout<<eiei;
		}//eiei++;
	}
	
}
