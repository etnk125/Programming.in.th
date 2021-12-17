#include<iostream>
using namespace std;
main()
{
	int i,n,a,b,j;
	cin>>a>>b;
	char x[b+1][a+1];
	for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	{
		cin>>x[j][i];
		x[j][i]=toupper(x[j][i]);
	}
	cin>>n;
	char word[n][16];
	for(i=0;i<n;i++)
	{
		cin>>word[i];
		j=0;
		while(word[i][j])
		{
			word[i][j]=toupper(word[i][j]);
			j++;
		}
	}
	for(int k=0;k<n;k++)
	{
//		while(1)
	}
	
	
	
	
	
	
	for(i=0;i<n;i++)
	cout<<endl<<word[i];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<x[j][i]<<" ";
		}
		cout<<endl;
	}
	
}
