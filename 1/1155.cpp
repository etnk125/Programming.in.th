#include<iostream>
using namespace std;
main()
{
	int a[2];
	cin>>a[0];
	int index=0,combo=1,prev=-1;
	a[1]=a[0];
	while(a[0]>0&&a[1]>0)
	{
		cin>>index;
		int temp=index%2;
		if(temp!=prev)
		{
			combo=1;
			prev=temp;
		}
		else
		{
			combo++;
		}
		if(combo>=3)a[temp]-=3;
		else a[temp]--;
	}
	if(a[0]<=0)cout<<0;
	else cout<<1;
	cout<<endl<<index;
}
