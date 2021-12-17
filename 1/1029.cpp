#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,m,q,selt;
	cin>>n>>m>>q;
	int arr[2*m+1];
	for(int i=1;i<=m;i++)
	{
		cin>>arr[2*i-1]>>arr[2*i];
		arr[2*i]+=arr[2*i-1];		
	}
	sort(arr+1,arr+2*m+1);
	int real[2*m+1],temp=1;
	for(int i=1;i<=2*m;i++)
	{
		if(arr[i]==arr[i+1])i++;
		else
		{
			real[temp++]=arr[i];
		}
	}
	int k=temp;
	
	while(q--)
	{
		cin>>selt;
		int down=1;
		int top=2*m;
		int mid=(top+down)/2;
		int round=20;
		while(round--)
		{
			if(arr[mid]>selt)top=mid;
			if(arr[mid]<selt)down=mid;
			mid=(top+down)/2;
		}
//		while(arr[mid]>selt)
		
	}
}
