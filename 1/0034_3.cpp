#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,A,B,C,D;
	cin>>a>>b>>c;
	int max=-999999999;
	if(a>max)max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	if(b*b-4*a*c<0)cout<<"No Solution";
	else
	{
		for(int i=-max;i<=max;i++)
		for(int j=-max;j<=max;j++)
		for(int k=-max;k<=max;k++)
		for(int l=-max;l<=max;l++)
		{
			if(a==i*k)
			if(b==i*l+j*k)
			if(c==j*l)
			{
				if(i<0)
				{
					i*=-1;
					j*=-1;
				}
				if(k<0)
				{
					k*=-1;
					l*=-1;
				}
				if(k<i)
				{
					int temp=k;
					k=i;
					i=temp;
					
					temp=j;
					j=l;
					l=temp;
				}
				if(k==i)
				{
					if(l<j)
					{
						int temp=l;
						l=j;
						j=temp;
					}
				}
				A=i;
				B=j;
				C=k;
				D=l;
				
				printf("%d %d %d %d",A,B,C,D);
				return 0;
			}
		}
		cout<<"No Solution";
	}
}
