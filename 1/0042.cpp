#include<iostream>
using namespace std;

int main()
{
	cout.precision(0);
	cout.setf(ios::fixed);
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		long double b=1;
		while(a--)
		b*=2;
		cout<<b<<endl;
	}

}
