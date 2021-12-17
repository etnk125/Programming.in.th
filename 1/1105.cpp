#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
main()
{
	int n,k;
	list<int> lane;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int speed;
		cin>>speed;
		if(lane.size()<k)
		{
			lane.push_back(speed);
			if(lane.size()==k)lane.sort();
		}
		else
		{
			if(lane.front()<speed)
			{
				lane.pop_front();lane.push_front(speed);
				lane.sort();
			}	
		}
//		for(list<int>::iterator it=lane.begin();it!=lane.end();it++)
//		cout<<*it;
//		cout<<endl<<endl;
	}
	cout<<lane.front();
}
