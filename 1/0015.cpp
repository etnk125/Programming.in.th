#include<iostream>
using namespace std;
main()
{
	int i,j,count=0,temp;
	unsigned int num[3];
	for(i=0;i<3;i++)
	cin>>num[i];
	
	while(1)
	{
		if((num[2]+num[0])/2!=num[1])
		{
			num[1]=(num[2]+num[0])/2;
			count++;
			cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
		}
		else if(num[2]-num[1]>1)
		{
			temp=num[1];
			num[1]=(num[1]+num[2])/2;
			num[0]=temp;
			count++;
			cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
		}
		else if(num[2]-num[1]==1&&num[1]-num[0]>1)
		{
			temp=num[1];
			num[1]=(num[1]+num[0])/2;
			num[2]=temp;
			count++;			
			cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
		}
		else break;
	}
	cout<<count;
}
