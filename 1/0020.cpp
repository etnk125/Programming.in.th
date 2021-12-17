#include<iostream>
using namespace std;
main()
{
	int a=5,max=-1,index;
	while(a--)
	{
		int b=4,sum=0,k;
		while(b--)
		{
			cin>>k;
			sum+=k;	
		}
		if(sum>max)
		{
			index=5-a;
			max=sum;
		}		
	}cout<<index<<" "<<max;
}

