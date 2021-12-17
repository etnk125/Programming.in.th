#include<iostream>
using namespace std;
main()
{
	string a,b;
	cin>>a>>b;
	int max=0,index=0;
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(a[i]==b[j])
			{
				int temp=0;
				while(a[i+temp]==b[j+temp])
				{
					temp++;
					if(i+temp==a.size())break;
					if(j+temp==b.size())break;
				}
				if(temp>max)
				{
					max=temp;
					index=i;
				}
			}
		}
	}
//	cout<<max<<index;
	for(int i=0;i<max;i++)
	cout<<a[index+i];
}
