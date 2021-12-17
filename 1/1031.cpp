#include<iostream>
using namespace std;
struct way
{
	int start;
	int fin;
};
main()
{
	int pow,tow,lad,i,j,max=-1;
	cin>>pow>>tow>>lad;
	struct way a[lad];
	for(i=0;i<lad;i++)
	cin>>a[i].start>>a[i].fin;
	
	for(i=0;i<lad;i++)//start;
	{
		int p=pow-1,fin=a[i].fin;
		if(a[i].start==1)//check first stair
		{
			for(j=0;j<lad;j++)//let's drive
			{
				if(p==0)break;
				if(fin==a[j].start)
				{
				//	cout<<i<<a[i].start<<fin<<a[j].start<<" "<<a[j].fin<<" "<<p<<endl;
					fin=a[j].fin;
					p--;
					j=0;
					
				}
				if(max<fin)max=fin;
			}		
		}
		
	}
	cout<<max;	
}
