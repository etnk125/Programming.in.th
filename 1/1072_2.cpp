#include<iostream>
using namespace std;
int a[500001],m,start[500001],count=0,index[500001];
void swap(int x,int y)
{
	int temp=a[x];
	int tempindex=index[x];
	a[x]=a[y];
	index[x]=index[y];
	a[y]=temp;
	index[y]=tempindex;
}
void renew(int x)
{
	int i=1,j=x+1;
	int max=m;
	while(i<x)swap(i++,x--);
	while(j<max)swap(j++,max--);
	count++;
	for(i=1;i<=m;i++)
	printf("%d ",a[i]);
	
}
main()
{
	int n,x,y,i,j;
	char way;
	cin>>m>>n;
	a[0]=99;
	index[0]=99;
	for(i=1;i<=m;i++)
	{
		cin>>a[i];
		start[i]=a[i];
		index[i]=i;	
	}
	while(n--)
	{
		cin>>way;
		switch( way )
		{
			case 'a':{
				cin>>x>>y;
				int temp=a[x];
				int temps=start[index[x]];
				a[x]=a[y];
				start[index[x]]=start[index[y]];
				a[y]=temp;
				start[index[y]]=temps;
				break;
			}
			case 'b':{
				cin>>x>>y;
				a[x]=y;
				break;
			}
			case 'c':{
				cin>>x;
				renew(x);
				break;
			}
			case 'q':{
				cin>>x;
				cout<<a[x]<<endl;
				break;
			}		
		}
		
	}
}
