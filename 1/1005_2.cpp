#include<iostream>
using namespace std;
main()
{
	int a,max=-1,index,i,j,k,sum;
	cin>>a;
	int sq[a]={0};
	for(i=2;i<a;i++)
	cin>>sq[i];
	for(i=2;i<a;i++)
	{
		sum=0;
		for(j=0;j<i;j++)
		sum+=sq[j];
		if(sum>max)
		{
			max=sum;
			index=j;
			k=i;
		}
		for(j=1;j+i-1<a;j++)
		{
			sum+=sq[j+i-1];
			sum-=sq[j-1];
			if(sum>max)
			{
				max=sum;
				index=j;
				k=i;				
			}
		}
		
	}
	if(max<=0)cout<<"Empty sequence";
	else 
	{
		for(i=0;i<k;i++)
		cout<<sq[index+i]<<" ";
		cout<<endl<<max;
	}
}
