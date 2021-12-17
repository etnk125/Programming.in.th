#include<iostream>
using namespace std;
main()
{
	int n,i,j,k;
	cin>>n>>k;
	int a[n+1]={0};
	for(i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
			for(j=i;j<=n;j++)
			{
				if(j%i==0&&a[j]==0)
				{
					a[j]=1;
					--k;
				//	cout<<i<<j<<k<<endl;
					if(k==0)break;
				}
				
			}
		}
		if(k==0)break;
	}
	cout<<j;
	
}
