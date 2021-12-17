#include<iostream>
using namespace std;
int a[500000],m;
void swap(int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void renew(int x)
{
	int i=0,j=x+1;
	int max=m-1;
	while(i<x)swap(i++,x--);
	while(j<max)swap(j++,max--);
}
main()
{
	int n,x,y;
	char way;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	cin>>a[i];
	while(n--)
	{
		cin>>way;
		switch( way )
		{
			case 'a':{
				cin>>x>>y;
				swap(x-1,y-1);
				break;
			}
			case 'b':{
				cin>>x>>y;
				a[x-1]=y;
				break;
			}
			case 'c':{
				cin>>x;
				renew(x-1);
				break;
			}
			case 'q':{
				cin>>x;
				cout<<a[x-1]<<endl;
				break;
			}		
		}
		
	}
}
