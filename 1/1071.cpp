#include<iostream>
#include<vector>
using namespace std;
typedef pair<int,int> ii;
main()
{
	int a,b;
	cin>>a>>b;
	vector<ii> bomb;
	for(int i=0;i<a;i++)
	{
		ii temp;
		cin>>temp.first>>temp.second;
		bomb.push_back(temp);
	}
	while(b--)
	{
		int x,y,r;
		cin>>x>>y>>r;
		int count=0;
	//	vector<int> eiei;
		for(int i=0;i<bomb.size();i++)
		{
			ii xyb=bomb[i];
			int temp1=xyb.first-x;
			int temp2=xyb.second-y;
			if(temp1<0)temp1*=-1;
			if(temp2<0)temp2*=-1;
			if(temp1<=r&&temp2<=r)
			{
				count++;
				bomb.erase(bomb.begin()+i);
				i--;
			}
		}
		cout<<count<<endl;
	
	}
}
