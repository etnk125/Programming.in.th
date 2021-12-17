#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,m,a,b,sum=0,run;
	cin>>n>>m;
	pair<int,int> arr[2*m];
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		a--;
		arr[2*i].first=a;
		arr[2*i].second=-1;
		arr[2*i+1].first=b;
		arr[2*i+1].second=1;
	}
	char com;
	cin>>com;
	if(com=='B')run=1;
	else if(com=='G')run=2;
	else run=0;
		
//	for(int k=0;k<2*m;k++)
//	cout<<arr[k].first<<' ';
//	cout<<endl;
//	for(int k=0;k<2*m;k++)
//	cout<<arr[k].second<<' ';
//	cout<<endl<<endl;
	sort(arr,arr+2*m);
	
	int j=0;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<2*m;k++)
		cout<<arr[k].first<<' ';
		cout<<endl;
		for(int k=0;k<2*m;k++)
		cout<<arr[k].second<<' ';
		cout<<endl<<endl;
		int temp=1; 
		if(i==arr[j].first)
		{
		
			while(arr[i].first==arr[i+temp].first)
			{
				for(int k=0;k<2*m;k++)
				cout<<arr[k].first<<' ';
				cout<<endl;
				for(int k=0;k<2*m;k++)
				cout<<arr[k].second<<' ';
				cout<<endl<<endl;
				
				arr[i].second+=arr[i+temp].second;
				arr[i+temp].second=0;
				arr[i+temp].first=-temp;
				temp++;j++;
			}
			
		}
		if(arr[i].second!=0)
		{
			arr[i].second*=-1;
			if(arr[i].second%3==2)run+=1;
			else if(arr[i].second%3==1)run+=2;
			run%=3;		
		}
		
		
		sum+=run;
		
		
	}
	cout<<sum;
}
