#include<iostream>
using namespace std;
main()
{
	int a,b,x,y,r,sum;
	cin>>a>>b;
	int arr[1000][1000];
	for(int i=0;i<1001;i++)
	for(int j=0;j<1001;j++)
	arr[i][j]=0;
	while(a--)
	{
		cin>>x>>y;
		arr[y][x]++;
	}
	while(b--)
	{
		sum=0;
		cin>>x>>y>>r;
		for(int i=y-r;i<=y+r;i++)
		for(int j=x-r;j<=x+r;j++)
		{
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
		
	}
}
