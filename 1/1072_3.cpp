#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n,q,a,b;
	cin>>n>>q;
	vector<int> line(n);
	char com;
	for(int i=0;i<n;i++)
	cin>>line[i];
	while(q--)
	{
		cin>>com;
		//cout<<com<<endl;
		switch(com)
		{
			case 'a':
			{
				cin>>a>>b;
				swap(line[a-1],line[b-1]);
				break;
			}
			case 'b':
			{
				cin>>a>>b;
				line[a-1]=b;
				break;
			}
			case 'c':
			{
				cin>>a;
				reverse(line.begin(),line.begin()+a);
				reverse(line.begin()+a,line.end());
				break;
			}
			case 'q':
			{
				cin>>a;
				cout<<line[a-1]<<endl;
				break;
			}
		}
	}
}

