#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	vector<int> arr[m],index[m];
	for(int i=0;i<n;i++)
	{
		int num,lane,speed;
		cin>>num>>lane>>speed;
		arr[lane-1].push_back(speed);
		index[lane-1].push_back(num);
	}
	int longg=0;
	for(int i=0;i<m;i++)
	{
		if(arr[i].size()>longg)longg=arr[i].size();
	}
	for(int i=0;i<longg;i++)
	{
		int max=0,indexx=999999999;
		for(int j=0;j<m;j++)
		{
			if(arr[j].size()>i&&max<=arr[j][i])
			{
				if(max==arr[j][i])
				{
					if(indexx>index[j][i])
					{
						indexx=index[j][i];
					}
				}
				else
				{
					max=arr[j][i];
					indexx=index[j][i];
				}
			}
		}
		cout<<indexx<<endl;
	}
	
}
