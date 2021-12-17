#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	int a,b,run;
	cin>>a>>b;
	char arr[a+1][b+1];
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	cin>>arr[i][j];
	if(a<b)run=a;
	else run=b;
	while(run--)
	{
		for(int i=0;i<run;i++)
		{
			int temp=0;
			for(int j=0;j<run;j++)
			{
				while(arr[i][j+temp]==arr[i+run][j+run-temp])
				{
					temp++;
				}
				
			}
		}
	}
	
//	for(int i=0;i<a;i++)
//	for(int j=0;j<b;j++)
//	cout<<arr[i][j];
}
