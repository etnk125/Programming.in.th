#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int in[n];
	for(int i=0;i<n;i++)
	cin>>in[i];
	int max;
	cin>>max;
	int arr[max+1];
	for(int i=0;i<=max;i++)
	arr[i]=0;
	for(int i=0;i<n;i++)
	arr[in[i]]++;
	int sum=0;
	for(int i=0;i<=max/2;i++)
	{
		if(i==max-max/2)
		{
			sum+=arr[max/2]*(arr[max/2]-1)/2;
		}
		else
		{
			sum+=arr[i]*arr[max-i];
		}
	}
//	for(int i=0;i<=max;i++)
//	cout<<arr[i];
	cout<<sum;
	
}
