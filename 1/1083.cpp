#include<iostream>
using namespace std;
main()
{
	int n,i,m,a,b,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	while(m--)
	{
		cin>>a>>b;
		a--;
		b--;
		int max=-1,min=arr[a],sum=0;
		for(j=a+1;j<=b;j++)
		{
			max=-1;
			while(arr[j]<=arr[j-1]&&j!=b+1)j++;
			if(j>b)break;
			min=arr[j-1];
			while(arr[j]>=arr[j-1]&&j!=b+1)j++;
			max=arr[j-1];
			if(max>min)sum+=max-min;
		//	cout<<max<<'-'<<min<<endl;
			
		}
		cout<<sum<<endl;
	}
	
}
