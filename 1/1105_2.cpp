#include<iostream>
#include<algorithm>
//#include<vector>
using namespace std;
main()
{
	int n,k,temp;
	cin>>n>>k;
	int arr[n];
	if(k==1)
	{
		int max=-1;
		while(n--)
		{
			cin>>temp;
			if(max<temp)
			max=temp;
		}cout<<max;
	}
	else
	{
			for(int i=0;i<n;i++)
		{
			cin>>temp;
			arr[i]=temp;
		}
		sort(arr,arr+n);
		cout<<arr[n-k];	
	}

}

