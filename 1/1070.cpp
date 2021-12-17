#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,i,j,temp;
	cin>>n;
	int a[n];
	cin>>a[0];
	for(i=1;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(a[0]+a[1]<=a[n-1])cout<<"yes";
	else cout<<"no";
}
