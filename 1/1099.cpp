#include<iostream>
#include<numeric>
#include<math.h>
using namespace std;
main()
{
	int a,b,temp;
	cin>>a>>b;
	int A=min(a,b);
	int B=max(a,b);
	while(B%A!=0)
	{
		temp=B%A;
		B=A;
		A=temp;
	}
	//cout<<mn;
	for(int i=1;i<=A;i++)
	{
		if(a%i==0&&b%i==0)
		printf("%d %d %d\n",i,a/i,b/i);
	}
	
}
