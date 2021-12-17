#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,sum=0;
	int a,b,c,d,e;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e;
		sum+=8*a;
		sum+=6*b;
		sum+=4*c;
		sum+=2*d;
		sum+=e;
	}cout<<(ceil(float(sum)/8));

}
