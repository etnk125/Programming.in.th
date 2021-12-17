#include<iostream>
using namespace std;
main()
{
	int a,b,i;
	cin>>a>>b;
	if(a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(i=a;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		break;
	}cout<<i;
}

