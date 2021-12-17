#include<iostream>
using namespace std;
main()
{
	int i,c,s,a,b;
	cin>>c>>s;char way;
	int q[s]={0};
	int id[10001]={0};
	for(i=0;i<s;i++)
	{
		cin>>a>>b;
		id[b]=a;
	}
	while(1)
	{
		cin>>way;
		if(way=='X')break;
		else if(way=='E')
		{
			cin<<a;
			q[0]=a;
		}
	}
}
