#include<iostream>
using namespace std;
main()
{
	int n,i,j,k,max=-1,area;
	cin>>n;
	int x[n],y[n];
	for(i=0;i<n;i++)
	cin>>x[i]>>y[i];
	for(i=2;i<n;i++)
	for(j=1;j<i;j++)
	for(k=0;k<j;k++)
	{
		area=x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i];
		if(area<0)area*=-1;
		if(area>max)max=area;
	}
	printf("%.3f",float(max)/2);
	
}
