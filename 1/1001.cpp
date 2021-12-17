#include<iostream>
using namespace std;
main()
{
	int i,j,m,n,count=66,o=0;
	cin>>m>>n;
	int time[n+1];
	char arr[m+100][n+100];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf(" %c",&arr[j][i]);
	for(j=0;j<n;j++)
	cin>>time[j];
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		if(arr[j][i]=='O')break;
	
		i--;
		while(time[j]--)	
		arr[j][i--]='#';
		
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<arr[j][i];
		
		cout<<endl;
	}

	
}
