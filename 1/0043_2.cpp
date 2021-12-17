#include<iostream>
#include<algorithm>//sort(t,t+n);
using namespace std;
main(){
//	cout.precision(0);cout.setf(ios::fixed);
	int n,p,i,j,k;
//	cin>>n;
//	int t[n],temp;
//	for(i=0;i<n;i++)
//	cin>>t[i];	
//	for(i=0;i<n;i++)
//	cout<<t[i];
	for(p=19;p>=0;p--)
	{
		unsigned long long a=0;
		for(i=1;i<=p;i++)
		for(j=1;j<=p+i;j++)
		for(k=1;k<=p+i+j;k++)
		a+=(i*j*k)%(i+j+k);
		cout<<p<<" "<<a<<endl;
	}
	

//	while(n--){
//	unsigned long long a=0;
//		for(i=1;i<=p;i++)
//		for(j=1;j<=p+i;j++)
//		for(k=1;k<=p+i+j;k++)
//		a+=(i*j*k)%(i+j+k);
//		cout<<a<<endl;
//	}
}
//for(i=1;i<n;i++)
//	{
//		cin>>t[i];
//		temp=t[i];
//		j=i;
//		while(j>0&&temp<=t[j-1])
//		{
//			t[j]=t[j-1];j--;
//		}
//		t[j]=temp;
//	}
