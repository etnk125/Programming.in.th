#include<iostream>
#include<math.h>
#include <algorithm> 
using namespace std;
int main()
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
		int k,i,temp;
		k=__gcd(a,b);
		i=__gcd(c,d);
		a/=k;
		b/=k;
		c/=i;
		d/=i;
	
	
	
		if(a<c)cout<<a<<" "<<b<<" "<<c<<" "<<d;	
		else if(a>c)cout<<c<<" "<<d<<" "<<a<<" "<<b;	
		else if(a==c)
		{
			if(b<=d)cout<<a<<" "<<b<<" "<<c<<" "<<d;	
			else if(b>d)cout<<c<<" "<<d<<" "<<a<<" "<<b;
		}
	}	
}
