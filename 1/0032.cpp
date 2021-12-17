#include<iostream>
using namespace std;
main()
{
	int n,i,j,count=0,temp;
	cin>>n;
	int num[n];
	for(i=0;i<n;i++)
	cin>>num[i];
	
	for(i=0;i<n;i++)
	{
		temp=num[i];
		j=i;
		while(j>0&&num[j-1]>=temp)
		{
			num[j]=num[j-1];
			j--;
		}
		num[j]=temp;
	}
//	for(i=0;i<n;i++)
//	cout<<num[i];
//	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(num[i]==1)
		{
			temp=num[i];
			j=i;
			while(j>0&&num[j-1]==0)
			{
				num[j]=num[j-1];
				j--;
			}
			num[j]=temp;
			break;
		}
		
	}
	for(i=0;i<n;i++)
	cout<<num[i];
	
}
