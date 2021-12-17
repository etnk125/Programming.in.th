#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int A,B,C;
	cin>>A>>B>>C;
	int delta=B*B-4*A*C;
	int temp=sqrt(delta);
	if(delta>=0&&temp*temp==delta)
	{
		int a=2*A;
		int c=2*A;
		int b=B+temp;
		int d=B-temp;
		int run=2;
		while(run<=min(a,b))
		{
			if(b%run==0&&a%run==0)
			{
				a/=run;
				b/=run;
				run=1;
			}
			run++;
		}
		run=2;
		while(run<=min(d,c))
		{
			if(c%run==0&&d%run==0)
			{
				d/=run;
				c/=run;
				run=1;
			}
			run++;
		}
		if(a>c)
		{
			run=a;
			a=c;
			c=run;
			run=b;
			b=d;
			d=run;
		}
		if(a==c)
		{
			run=min(b,d);
			d=max(b,d);
			b=run;
		}
		printf("%d %d %d %d",a,b,c,d);
	}
	else
	{
		cout<<"No Solution";
	}
	
}
