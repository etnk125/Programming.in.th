#include<iostream>
using namespace std;
main()
{
	int a,max=-1,index,i;
	cin>>a;
	int sq[a];
	cin>>sq[0]>>sq[1];
	for(i=2;i<a;i++)
	{
		cin>>sq[i];
		if(sq[i]+sq[i-1]+sq[i-2]>max)
		{
			max=sq[i]+sq[i-1]+sq[i-2];
			index=i;
		}
	}
	if(max<=0)cout<<"Empty sequence";
	else cout<<sq[index-2]<<" "<<sq[index-1]<<" "<<sq[index]<<endl<<max;
}
