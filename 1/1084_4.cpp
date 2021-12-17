#include<iostream>
using namespace std;
unsigned long long int count=0,k;

main()
{
	unsigned long long int n,sum=0,i,j,y,x,summy=0,dex=0;
	cin>>x>>y>>k;
	
		unsigned long long int temp=x,temy=0;
		while(temp>=5)
		{
			temp/=5;
//			n+=sum+temp;
			sum=(sum+temp)%k;
		}	
//		cout<<x+i<<n<<endl;
		summy=(sum*(y-x+1))&k;
		
	
		
	cout<<summy;
}
