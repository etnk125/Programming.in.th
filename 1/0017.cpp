#include<iostream>
using namespace std;
main()
{
	int side[4],i,A,B,j,temp;
	for(i=0;i<4;i++)
	cin>>side[i];
	for(i=1;i<4;i++)//insertion sort
	{
		temp=side[i];
		j=i;
		while(j>0&&temp<=side[j-1])
		{
			side[j]=side[j-1];
			j--;
		}
		side[j]=temp;
	}
//	for(i=0;i<4;i++)
//	cout<<side[i];
	if(side[2]<=side[3])A=side[2];
	else A=side[3];
	if(side[0]<=side[1])B=side[0];
	else B=side[1];
	cout<<A*B;
}
