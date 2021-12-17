#include<iostream>
using namespace std;
main()
{
	int a[5],run=1;
	for(int i=0;i<5;i++)cin>>a[i];
	if(a[0]==1)
	if(a[1]==2)
	if(a[2]==3)
	if(a[3]==4)
	if(a[4]==5)
	for(int i=0;i<5;i++)
	cout<<a[i]<<' ';
	while(1)
	{
		
			
		if(a[run]<a[run-1])
		{
			int temp=a[run];
			a[run]=a[run-1];
			a[run-1]=temp;
			for(int i=0;i<5;i++)
			cout<<a[i]<<' ';
			cout<<endl;
		}
		run++;
		if(run==5)run=1;
//		cout<<run;
		if(a[0]==1)
		if(a[1]==2)
		if(a[2]==3)
		if(a[3]==4)
		if(a[4]==5)
		return 0;	
	}
}
