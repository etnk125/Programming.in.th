#include<iostream>
using namespace std;
main()
{
	int f,b,l,k,n,i,j;
	unsigned long long int na=0,count=0;
	cin>>n;
	char stu[n][4];
	for(i=0;i<n;i++)
	cin>>stu[i];
	for(k=0;k<3;k++)
	for(i=0;i<10;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+48==stu[j][k])
			count++;
		}	
		if(count>=2)na+=(count*(count-1))/2;
		count=0;
	}
	for(f=0;f<3;f++)
	for(b=f+1;b<3;b++)
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<n;k++)
			{
				if(stu[k][f]==i+48)
				if(stu[k][b]==j+48)
				count++;
			}
			if(count>=2)
			{
				na-=(count*(count-1))/2;
			}count=0;
			
		}	
	}	
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	for(k=0;k<10;k++)
	{
		for(l=0;l<n;l++)
		{
			if(stu[l][0]==i+48)
			if(stu[l][1]==j+48)
			if(stu[l][2]==k+48)
			count++;
		}
		if(count>=2)
		{
			na+=(count*(count-1))/2;
		}count=0;
		
		
	}	
	
	cout<<na;
}
