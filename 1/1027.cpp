#include<iostream>
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
	int count=0,alive=7;
	while(1)
	{
		string a;
		cin>>a;
		if(a[0]=='!')break;
		for(int i=0;i<a.size();i++)
		if(q[a[i]]!=-1)
		q[a[i]]++;
		int min=999999999;
		char index='Z';
		for(char i='A';i<='G';i++)
		{
			if(q[i]!=-1&&q[i]<min)
			{
				min=q[i];
				count=1;
				index=i;
			}
			else if(q[i]==min)
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
	cout<<alive<<endl;
	while(alive>0)
	{
		int max=-1;
		list<char>index;
		for(char i='A';i<='G';i++)
		{
			if(q[i]>max)
			{
				max=q[i];
			}
		}
		for(char i='A';i<='G';i++)
		{
			if(q[i]==max)
			{
				index.push_back(i);
				alive--;
				q[i]=-1;
				
			}
		}
		index.sort();
		while(!index.empty())
		{
			cout<<index.front()<<' '<<max<<endl;
			index.pop_front();
			//cout<<eiei;
		}//eiei++;
	}
	
}
