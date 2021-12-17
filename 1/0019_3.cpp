#include<iostream>
#include<math.h>
using namespace std;


main()
{
	int i,b[10],n,k,s[10],q,r,min=1000000001;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>s[i]>>b[i];
	for(i=1;i<pow(2,n);i++)
	{
		q=1;
		r=0;
		k=i;
		for(int j=0;j<n;j++)
		{
			if(k%2==1)
			{
				q*=s[j];
				r+=b[j];
			}
			k/=2;	
		}
		if(q>=r)k=q-r;
		else k=r-q;
		if(min>k)min=k;				
	}
	cout<<min;
	
}
