#include<iostream>
#include<queue>
using namespace std;
main()
{
	int a;
	cin>>a;
	priority_queue<int> eiei;
	while(a--)
	{
		char com;
		cin>>com;
		if(com=='P')
		{
			int temp;
			cin>>temp;
			eiei.push(temp);
		}
		else
		{
			if(!eiei.empty())
			{
				cout<<eiei.top()<<endl;
				eiei.pop();
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
}
