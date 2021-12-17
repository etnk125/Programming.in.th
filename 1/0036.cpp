#include<iostream>
using namespace std;
unsigned long long int fac(unsigned long long int b)
{
	unsigned long long int a=b;
	for(int i=1;i<a;i++)
	{
		b*=i;
	}
//	cout << b<<endl;
	return b;
}
int cnr(int n,int r)
{
	int c=0;
	unsigned long long int f=n;
	unsigned long long int b=fac(r);
	for(int i=1;i<n;i++)
	{
		f*=i;
		if(f%b==0&&c<2)
		{
			f/=b;
			c++;
		}
	}
	if(n%2!=0)f/=(r+1);
	return f;
}
main()
{
	int a;
	cin >> a;
	if(a%2==0)
	cout<<cnr(a,a/2);
	else
	cout<<2*cnr(a,a/2);
//	cout<<fac(a)*fac(a);	


}
