#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	int a,b;
	scanf("%d %d ",&a,&b);
	char arr1[3][3*a+1]={0};
	char arr2[3][3*b+1]={0};
	for(int i=0;i<3;i++)
	{
//		cout<<i;
		gets(arr1[i]);
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<i;
		gets(arr2[i]);
	}
	
	
//	for(int i=0;i<3;i++)
//	cout<<arr1[i]<<endl;
	for(int i=0;i<3;i++)
	cout<<arr2[i]<<endl;
}
