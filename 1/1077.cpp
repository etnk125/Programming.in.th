#include<iostream>
using namespace std;
main()
{
	int ndot,ntime;
	cin>>ndot>>ntime;
	int i,j,x[ndot]={0},y[ndot]={0};
	for(i=0;i<ndot;i++)
	cin>>x[i]>>y[i];
	while(ntime--)
	{
		int h,k,power,count=0;
		cin>>h>>k>>power;
		int maxtop=h+power;
		int maxbot=h-power;
		int maxleft=k-power;
		int maxright=k+power;
		for(i=0;i<ndot;i++)
		if(x[i]<=maxtop&&x[i]>=maxbot&&y[i]<=maxright&&y[i]>=maxleft)
		count++;
		cout<<count<<endl;
	}
}
