#include<iostream>
#include<utility>
#include<list>
#include<map>
using namespace std;
//typedef pair<int,int> ii;
main()
{
	int nc,ns;
	cin>>nc>>ns;
	list<int> qc,qs;
	map<int,int> clas ;
	for(int i=0;i<ns;i++)
	{
		int a,b;
		cin>>a>>b;
		clas[b]=a;
	}
	char com=0;
	while(com!='X')
	{
		cin>>com;
		if(com=='E')
		{
			int temp;
			cin>>temp;
			int point=clas[temp];
			list<int>::iterator itc=qc.end();
			list<int>::iterator its=qs.end();
			itc--;
			its--;
			bool index=0;
			for(int i=0;i<qc.size();i++)
			{
				if(point==*itc)
				{
					index=1;
					break;
				}
				itc--;
				its--;
			}
			if(index==1)
			{
				its++;
				itc++;
				qc.insert(itc,point);
				qs.insert(its,temp);
			}
			else
			{
				qc.push_back(point);
				qs.push_back(temp);
			}
			
		}
		else if(com=='D')
		{
			cout<<qs.front()<<endl;
			qs.pop_front();
			qc.pop_front();
		}
		else 
		{
			cout<<0;
			return 0;
		}
	}
}
