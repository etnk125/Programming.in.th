#include<iostream>
using namespace std;
main()
{
	int n,i,j,max=-1,way=0,index,temp,count;
	cin>>n;
	int a[n],b[n];	
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		temp=a[i];
		j=i;
		while(j>0&&a[j-1]>=temp)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		count=0;
		temp=a[i];
		j=i;
		while(temp==a[j])
		{
			count++;
			j++;
		}
		//i=j;
		if(count>max)
		{
			max=count;
			way=0;
			for(int k=0;k<n;k++)
			b[k]=0;
			b[way]=temp;
		}
		else if(count==max)
		{
			way++;
			b[way]=temp;
		}
	}
		if(way==0)cout<<b[way];
		else 
		{
			for(i=1;i<way;i++)
			{
				temp=b[i];
				j=i;
				while(j>0&&b[j-1]>=temp)
				{
					b[j]=b[j-1];
					j--;
				}
				b[j]=temp;
			}
			for(i=0;i<=way;i++)
			cout<<b[i]<<" ";
		}
	
}
