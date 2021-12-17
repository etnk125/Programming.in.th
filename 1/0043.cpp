#include<iostream>
using namespace std;
main(){
	cout.precision(0);cout.setf(ios::fixed);
	int n,p,i,j,k;cin>>n;
	while(n--){
	long double a=0;cin>>p;
		for(i=1;i<=p;i++)
		for(j=1;j<=p+i;j++)
		for(k=1;k<=p+i+j;k++)
		a+=(i*j*k)%(i+j+k);
		cout<<a<<endl;
	}
}
