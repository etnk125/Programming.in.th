#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,i,j,count=0;
	cin>>n;
	int a[n][n],ar[n*n]={0},c=0,sum1=0,sum2=0;
	int sumx[n]={0},sumy[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			ar[c++]=a[i][j];
			sumx[i]+=a[i][j];
		}		
		sum1+=a[i][i];	
		sum2+=a[i][n-1-i];	
	}
	int k=n*n;
	sort(ar,ar+k);
	for(i=0;i<k;i++)	
	if(i>1&&ar[i]==ar[i-1])
	{
	//	cout<<ar[i]<<endl<<a[i-1]<<endl;
		count=-1;
		break;	
	}
	if(sum1!=sum2)count=-1;
	else
	{
		for(j=0;j<n;j++)
		{
			for(i=0;i<n;i++)
			sumy[j]+=a[i][j];
			
			if(sumy[j]!=sum1||sumx[j]!=sum1)
			{
				count=-1;
				break;
			}			
		}
	}
	
	if(count==-1)cout<<"No";
	else if(count==0)cout<<"Yes";

	
	
}

