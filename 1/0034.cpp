#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int A,B,C;
	cin>>A>>B>>C;
	if(B*B-4*A*C<0)cout<<"No Solution";
	else
	{
		int a=2*A;
		int b=B+sqrt(B*B-4*A*C);
		int c=2*A;
		int d=B-sqrt(B*B-4*A*C);
		int i,temp;
		if(a<b)temp=b;
		else temp=a;
		for(i=temp;i>1;i--)
		if(a%i==0&&b%i==0)
		{
			a/=i;
			b/=i;
		}
		if(c<d)temp=d;
		else temp=c;
		for(i=temp;i>1;i--)
		if(c%i==0&&d%i==0)
		{
			c/=i;
			d/=i;
		}
		if(a<c)cout<<a<<" "<<b<<" "<<c<<" "<<d;	
		else if(a>c)cout<<c<<" "<<d<<" "<<a<<" "<<b;	
		else if(a==c)
		{
			if(b<=d)cout<<a<<" "<<b<<" "<<c<<" "<<d;	
			else if(b>d)cout<<c<<" "<<d<<" "<<a<<" "<<b;
		}
	}	
}
