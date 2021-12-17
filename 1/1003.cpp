#include<iostream>
using namespace std;
main()
{
	int n,i,j,k,count=0,a[100];
	scanf(" %d",&n);
	
	
	for(i=0;20*i+9*j+6*k<=n;i++)
	{
		for(j=0;20*i+9*j+6*k<=n;j++)
		{
			for(k=0;20*i+9*j+6*k<=n;k++)
			{
				if(20*i+9*j+6*k!=0)
				{
					cout<<20*i+9*j+6*k<<endl;
					count++;	
				}
				
			}
			k=0;
		}
		j=0;	
	}
	if(count==0)cout<<"no";
	

}
