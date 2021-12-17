#include<iostream>
using namespace std;
main()
{
//	string a[3],b[3];
	int x,y;
	cin>>x>>y; cin.ignore();
	char a[3][4*x+1];
	char b[3][4*y+1];
	for(int i=0;i<3;i++)
	for(int j=0;j<4*x-1;j++)
	scanf("%1c",&a[i][j]);
	for(int i=0;i<3;i++)
	for(int j=0;j<4*y-1;j++)
	scanf("%1c",&b[i][j]);
	int suma=0,sumb=0;
	for(int i=0;i<4*x;i+=4)
	{
		int run=0;
		if(a[0][i+1]=='_')
		{
			if(a[1][i+2]==' ')
			{
				if(a[2][i]=='|')run=6;
				else run=5;
			}
			else if(a[2][i+2]=='|')
			{
				if(a[2][i+1]=='_')run=7;
				else if(a[1][i]==' ')run=3;
				else if(a[2][i]==' ')run=9;
				else run=8;
			}
			else run=2;
		}
		else
		{
			if(a[1][i+1]=='_')run=4;
			else if(a[1][i+2]=='|')run=1;
			else run=0;
		}
		suma+=run;
		suma*=10;
	}
	suma/=10;
	for(int i=0;i<4*y;i+=4)
	{
		int run=0;
		if(b[0][i+1]=='_')
		{
			if(b[1][i+2]==' ')
			{
				if(b[2][i]=='|')run=6;
				else run=5;
			}
			else if(b[2][i+2]=='|')
			{
				if(b[1][i+1]==' ')run=7;
				else if(b[1][i]==' ')run=3;
				else if(b[2][i]==' ')run=9;
				else run=8;
			}
			else run=2;
		}
		else
		{
			if(b[1][i+1]=='_')run=4;
			else if(b[1][i+2]=='|')run=1;
			else run=0;
		}
		sumb+=run;
		sumb*=10;
	}
	sumb/=10;
	cerr<<suma<<' '<<sumb<<endl;
	cout<<suma+sumb;
	cerr<<"*******\n";
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<4*x;i++)
		cerr<<b[j][i];
		cerr<<endl;
	}
	
}
