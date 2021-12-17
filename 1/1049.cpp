#include<iostream>
using namespace std;
main()
{
	int n,lane;
	cin>>n>>lane;
	int max[n]={0};
	int index[n]={0};
	int rear[lane+1]={0};
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(c>max[rear[b]])
		{
			max[rear[b]]=c;
			index[rear[b]]=a;
		}
		else if(c==max[rear[b]])
		{
			if(b<index[rear[b]])
			{
				index[rear[b]]=a;
			}
		}
		rear[b]++;
	}
	for(int i=0;i<n;i++)
	{
		if(max[i]!=0)cout<<index[i]<<endl;
	}
}
